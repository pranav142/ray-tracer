#include "camera.h"
#include "utility.h"
#include "vec.h"
#include <bits/types/cookie_io_functions_t.h>
#include <cmath>

Camera::Camera(Vec3 origin, Orientation orientation, double vertical_fov_deg,
               double focal_length, double aspect_ratio, double defocus_angle)
    : m_origin(origin), m_orientation(orientation),
      m_vertical_fov_deg(vertical_fov_deg), m_focal_length(focal_length),
      m_aspect_ratio(aspect_ratio), m_defocus_angle(defocus_angle) {
  update();
}

void Camera::update() {
  m_coordinate_system = _calculate_coordinate_system();
  m_viewport = _calculate_viewport();
  m_defocus_disk = _calculate_defocus_disk();
}

DefocusDisk Camera::_calculate_defocus_disk() const {
  DefocusDisk defocus_disk;
  double theta = degree_to_radian(m_defocus_angle / 2.0);
  defocus_disk.radius =
      m_defocus_angle <= 0 ? 0 : m_focal_length * std::tan(theta);
  defocus_disk.u = m_coordinate_system.right * defocus_disk.radius;
  defocus_disk.v = m_coordinate_system.up * defocus_disk.radius;
  return defocus_disk;
}

Viewport Camera::_calculate_viewport() const {
  Viewport viewport;
  viewport.center = _calculate_viewport_center();
  viewport.height = _calculate_viewport_height();
  viewport.width = viewport.height * m_aspect_ratio;
  viewport.horizontal_axis = viewport.width * m_coordinate_system.right;
  viewport.vertical_axis = -viewport.height * m_coordinate_system.up;
  return viewport;
}

double Camera::_calculate_viewport_height() const {
  double theta = degree_to_radian(m_vertical_fov_deg);
  double h = std::tan(theta / 2);
  return 2 * h * m_focal_length;
}

Vec3 Camera::calculate_viewport_top_left() const {
  return m_viewport.center -
         (m_viewport.width / 2.0) * m_coordinate_system.right +
         (m_viewport.height / 2.0) * m_coordinate_system.up;
}

CoordinateSystem Camera::_calculate_coordinate_system() const {
  Vec3 forward = _get_forward_vector();
  Vec3 right = unit_vector(cross(forward, Vec3(0, 1, 0)));
  Vec3 up = cross(right, forward);
  return CoordinateSystem{forward, right, up};
}

Vec3 Camera::_calculate_viewport_center() const {
  return m_origin + m_focal_length * m_coordinate_system.forward;
}

Vec3 Camera::_get_forward_vector() const {
  double pitch_rad = degree_to_radian(m_orientation.pitch_deg);
  double yaw_rad = degree_to_radian(m_orientation.yaw_deg);

  double viewport_x = std::cos(pitch_rad) * std::sin(yaw_rad);
  double viewport_y = std::sin(pitch_rad);
  double viewport_z = -std::cos(pitch_rad) * std::cos(yaw_rad);

  return unit_vector(Vec3(viewport_x, viewport_y, viewport_z));
}
