#include "camera.h"
#include "hittable.h"
#include "image.h"
#include "interval.h"
#include <cstdint>
#include <sys/types.h>

Pixel Camera::_get_ray_color(const Ray &ray, const Interval &interval,
                             const World &world) const {
  HitRecord hit_record;
  double is_hit = world.intersects(ray, interval, hit_record);
  if (!is_hit) {
    auto a = 0.5 * (ray.direction().y() + 1);
    return Pixel{uint8_t(0.5 * (1 - a) * 255), uint8_t(0.7 * (1 - a) * 255),
                 255};
  }

  Vec3 scaled_surface_normal = 0.5 * (Vec3(1, 1, 1) + hit_record.normal);

  return Pixel{
      uint8_t(255 * scaled_surface_normal.x()),
      uint8_t(255 * scaled_surface_normal.y()),
      uint8_t(255 * scaled_surface_normal.z()),
  };
}

void Camera::render(const World &world, Image &image) const {
  double view_port_width = m_view_port_height * image.aspect_ratio();

  double dy = m_view_port_height / image.height();
  double dx = view_port_width / image.width();

  Vec3 view_port_origin = Vec3(-view_port_width / 2.0 + m_camera_origin.x(),
                               m_view_port_height / 2.0 + m_camera_origin.y(),
                               m_camera_origin.z() + m_focal_length);

  Interval valid_interval(0, std::numeric_limits<double>::infinity());

  for (size_t y = 0; y < image.height(); y++) {
    for (size_t x = 0; x < image.width(); x++) {
      Vec3 ray_direction =
          Vec3(view_port_origin.x() + dx * x, view_port_origin.y() - dy * y,
               view_port_origin.z());
      ray_direction.normalize();

      Ray ray(m_camera_origin, ray_direction);
      Pixel color = _get_ray_color(ray, valid_interval, world);
      image.set_pixel(x, y, color);
    }
  }
}
