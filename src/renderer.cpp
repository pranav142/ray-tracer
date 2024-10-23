#include "renderer.h"

#include "camera.h"
#include "image.h"
#include "material.h"
#include "ray.h"
#include "utility.h"
#include "vec.h"
#include "world.h"
#include <algorithm>
#include <cstdlib>
#include <execution>
#include <iostream>
#include <memory>
#include <mutex>

Image RayTracer::render(const Camera &camera, const World &world,
                        double image_height) {
  Image image(image_height, camera.get_aspect_ratio());
  _initialize(camera, image);

#define MT 1
#ifdef MT
  size_t width = image.width();
  size_t height = image.height();

  // Sequential loop for `y`
  for (size_t y = 0; y < height; y++) {
    std::clog << "Number of lines remaining: " << height - y << '\n';
    std::vector<size_t> x_indices(width);
    std::iota(x_indices.begin(), x_indices.end(), 0);
    std::for_each(std::execution::par, x_indices.begin(), x_indices.end(),
                  [&](size_t x) {
                    Vec3 pixel_color = _render_pixel(x, y, camera, world);
                    image.set_pixel(x, y, pixel_color);
                  });
  }
#else

  for (size_t y = 0; y < image.height(); y++) {
    std::clog << "Number of lines remaining: " << image.height() - y << '\n';
    for (size_t x = 0; x < image.width(); x++) {
      Vec3 pixel_color = _render_pixel(x, y, camera, world);
      image.set_pixel(x, y, pixel_color);
    }
  }
#endif
  return image;
}

Vec3 RayTracer::_render_pixel(size_t x, size_t y, const Camera &camera,
                              const World &world) const {
  Vec3 average_color(0, 0, 0);

  for (size_t i = 0; i < m_samples_per_pixel; i++) {
    Ray ray = _generate_ray(x, y, camera);
    average_color = average_color + _get_ray_color(ray, world, m_max_depth);
  }

  return average_color / m_samples_per_pixel;
}

Vec3 RayTracer::_get_ray_origin(const Camera &camera) const {
  DefocusDisk defocus_disk = camera.get_defocus_disk();
  double random_offset = random_double(-1, 1);
  return camera.get_origin() + random_offset * defocus_disk.u +
         random_offset * defocus_disk.v;
}

Ray RayTracer::_generate_ray(size_t x, size_t y, const Camera &camera) const {
  Vec3 ray_origin = _get_ray_origin(camera);
  Vec3 ray_direction = _get_random_pixel_sample(x, y) - ray_origin;

  ray_direction.normalize();
  return Ray(ray_origin, ray_direction);
}

Vec3 RayTracer::_get_random_pixel_sample(size_t x, size_t y) const {
  double random_offset = random_double();

  Vec3 pixel_sample = m_pixel00_loc + ((x + random_offset) * m_pixel_delta_u) +
                      ((y + random_offset) * m_pixel_delta_v);
  return pixel_sample;
}

void RayTracer::_initialize(const Camera &camera, const Image &image) {
  Viewport viewport = camera.get_viewport();
  m_pixel_delta_u = viewport.horizontal_axis / image.width();
  m_pixel_delta_v = viewport.vertical_axis / image.height();
  m_pixel00_loc = _calculate_top_left_pixel(camera);
}

Vec3 RayTracer::_calculate_top_left_pixel(const Camera &camera) const {
  return camera.calculate_viewport_top_left() +
         0.5 * (m_pixel_delta_u + m_pixel_delta_v);
}

Vec3 RayTracer::_get_ray_color(const Ray &ray, const World &world,
                               int max_depth) const {
  static const Vec3 SHADOW(0, 0, 0);
  static const Vec3 LIGHT_SOURCE_COLOR(0.7, 0.7, 0.7);
  static const Interval valid_interval(0.001, infinity);

  Vec3 attenuation;
  Ray scattered_ray;
  HitRecord hit_record;

  if (max_depth == 0) {
    return SHADOW;
  }

  if (!world.intersects(ray, valid_interval, hit_record)) {
    return LIGHT_SOURCE_COLOR;
  }

  std::shared_ptr<Material> material = hit_record.material;
  if (!material ||
      !material->scattered(ray, hit_record, attenuation, scattered_ray)) {
    return SHADOW;
  }

  return attenuation * _get_ray_color(scattered_ray, world, max_depth - 1);
}
