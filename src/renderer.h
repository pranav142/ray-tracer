#pragma once

#include "camera.h"
#include "ray.h"
#include "vec.h"
#include "world.h"

class RayTracer {
public:
  RayTracer(double samples_per_pixel, double max_depth)
      : m_samples_per_pixel(samples_per_pixel), m_max_depth(max_depth) {}

  Image render(const Camera &camera, const World &world, double image_height);

private:
  void _initialize(const Camera &camera, const Image &image);
  Vec3 _calculate_top_left_pixel(const Camera &camera) const;

  Vec3 _render_pixel(size_t x, size_t y, const Camera &camera,
                     const World &world) const;
  Ray _generate_ray(size_t x, size_t y, const Camera &camera) const;
  Vec3 _get_random_pixel_sample(size_t x, size_t y) const;
  Vec3 _get_ray_color(const Ray &ray, const World &world, int max_depth) const;

private:
  double m_samples_per_pixel;
  int m_max_depth;

  Vec3 m_pixel00_loc;
  Vec3 m_pixel_delta_u;
  Vec3 m_pixel_delta_v;
};
