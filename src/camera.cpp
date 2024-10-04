#include "camera.h"
#include "hittable.h"
#include "image.h"
#include "interval.h"
#include "vec.h"

Vec3 Camera::_get_ray_color(const Ray &ray, const Interval &interval,
                            const World &world) const {
  HitRecord hit_record;
  double is_hit = world.intersects(ray, interval, hit_record);
  if (!is_hit) {
    auto a = 0.5 * (ray.direction().y() + 1);
    return Vec3(0.5 * (1 - a), 0.7 * (1 - a), 1);
  }

  std::clog << hit_record.normal << '\n';
  return 0.5 * (Vec3(1, 1, 1) + hit_record.normal);
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
      Vec3 final_color(0, 0, 0);
      for (size_t i = 0; i < m_pixels_per_sample; i++) {
        Ray ray = _get_random_ray_in_pixel(x, y, dx, dy, view_port_origin);
        Vec3 ray_color = _get_ray_color(ray, valid_interval, world);
        final_color = final_color + ray_color;
      }
      image.set_pixel(x, y, final_color / m_pixels_per_sample);
    }
  }
}

Ray Camera::_get_random_ray_in_pixel(size_t x, size_t y, double dx, double dy,
                                     const Vec3 &view_port_origin) const {
  // double random_offset = random_double();
  // std::clog << random_offset << '\n';
  double random_offset = 0;
  Vec3 ray_direction =
      Vec3((view_port_origin.x() + dx * x) + random_offset * dx,
           (view_port_origin.y() - dy * y) + random_offset * dy,
           view_port_origin.z());

  ray_direction.normalize();
  return Ray(m_camera_origin, ray_direction);
}
