#pragma once

#include "image.h"
#include "interval.h"
#include "vec.h"
#include "world.h"

class Camera {
public:
  Camera(double aspect_ratio, double view_port_height, double focal_length,
         double camera_x, double camera_y, double camera_z,
         int pixels_per_sample, int max_depth)
      : m_camera_origin(camera_x, camera_y, camera_z),
        m_focal_length(focal_length), m_view_port_height(view_port_height),
        m_pixels_per_sample(pixels_per_sample), m_max_depth(max_depth) {}

  void render(const World &world, Image &image) const;

private:
  double m_view_port_height;
  double m_focal_length;
  Vec3 m_camera_origin;
  int m_pixels_per_sample;
  int m_max_depth;

  Vec3 _get_ray_color(const Ray &ray, const World &world, int max_depth) const;

  Ray _get_random_ray_in_pixel(size_t x, size_t y, double dx, double dy,
                               const Vec3 &view_port_origin) const;
};
