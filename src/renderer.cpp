#include "renderer.h"

#include "camera.h"
#include "image.h"
#include "material.h"
#include "utility.h"
#include "vec.h"
#include "world.h"
#include <iostream>
#include <memory>

Image ray_trace_render(const World &world, const Camera &camera,
                       double image_height, double samples_per_pixel,
                       int max_depth) {
  Image image(image_height, camera.get_aspect_ratio());

  Viewport viewport = camera.get_viewport();
  CoordinateSystem coordinate_system = camera.get_coordinate_system();

  Vec3 viewport_top_left = viewport.center -
                           (viewport.width / 2.0) * coordinate_system.right +
                           (viewport.height / 2.0) * coordinate_system.up;

  double vertical_pixel_stride = viewport.height / image.height();
  double horizontal_pixel_stride = viewport.width / image.width();

  for (size_t y = 0; y < image.height(); y++) {
    std::clog << "Number of lines remaining: " << image.height() - y << '\n';
    for (size_t x = 0; x < image.width(); x++) {
      Vec3 pixel_color =
          render_pixel(x, y, horizontal_pixel_stride, vertical_pixel_stride,
                       camera, world, samples_per_pixel, max_depth);
      image.set_pixel(x, y, pixel_color);
    }
  }

  return image;
}

static Vec3 accumulate_ray_samples(size_t x, size_t y, double dx, double dy,
                                   const Camera &camera, const World &world,
                                   double samples_per_pixel, int max_depth) {
  Vec3 average_color(0, 0, 0);
  for (size_t i = 0; i < samples_per_pixel; i++) {
    Ray ray = generate_ray(camera, x, y, dx, dy);
    average_color = average_color + _get_ray_color(ray, world, max_depth);
  }
  return average_color / samples_per_pixel;
}

Vec3 render_pixel(size_t x, size_t y, double dx, double dy,
                  const Camera &camera, const World &world,
                  double samples_per_pixel, int max_depth) {
  return accumulate_ray_samples(x, y, dx, dy, camera, world, samples_per_pixel,
                                max_depth);
}

static Ray generate_ray(const Camera &camera, size_t x, size_t y, double dx,
                        double dy) {
  return _get_random_ray_in_pixel(x, y, dx, dy, camera.get_viewport(),
                                  camera.get_coordinate_system(),
                                  camera.get_origin());
}

static Ray _get_random_ray_in_pixel(size_t x, size_t y, double dx, double dy,
                                    const Viewport &viewport,
                                    const CoordinateSystem &cs,
                                    const Vec3 &camera_origin) {
  double random_offset = random_double();
  Vec3 ray_direction = viewport.center - (viewport.width / 2.0) * cs.right +
                       (viewport.height / 2.0) * cs.up +
                       (dx * (x + random_offset)) * cs.right -
                       (dy * (y + random_offset)) * cs.up - camera_origin;
  ray_direction.normalize();
  return Ray(camera_origin, ray_direction);
}

static Vec3 _get_ray_color(const Ray &ray, const World &world, int max_depth) {
  if (max_depth == 0) {
    return Vec3(0, 0, 0);
  }

  HitRecord hit_record;
  static Interval valid_interval(0.001,
                                 std::numeric_limits<double>::infinity());
  bool is_hit = world.intersects(ray, valid_interval, hit_record);
  if (!is_hit) {
    return Vec3(0.7, 0.7, 0.7);
  }

  Vec3 attenuation;
  Ray scattered_ray;

  std::shared_ptr<Material> material = hit_record.material;
  if (!material) {
    return Vec3(0, 0, 0);
  }

  if (!material->scattered(ray, hit_record, attenuation, scattered_ray)) {
    return Vec3(0, 0, 0);
  }
  return attenuation * _get_ray_color(scattered_ray, world, max_depth - 1);
}
