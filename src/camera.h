#pragma once

#include "image.h"
#include "interval.h"
#include "vec.h"
#include "world.h"

class Camera {
public:
  Camera(double aspect_ratio, double view_port_height, double focal_length,
         double camera_x, double camera_y, double camera_z)
      : m_camera_origin(camera_x, camera_y, camera_z),
        m_focal_length(focal_length), m_view_port_height(view_port_height) {}

  void render(const World &world, Image &image) const;

private:
  double m_view_port_height;
  double m_focal_length;
  Vec3 m_camera_origin;

  Pixel _get_ray_color(const Ray &ray, const Interval &interval,
                       const World &world) const;
};
