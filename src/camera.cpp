#include "camera.h"
#include "utility.h"
#include "vec.h"
#include <bits/types/cookie_io_functions_t.h>

Camera::Camera(Vec3 origin, Orientation orientation, double viewport_height,
               double focal_length, double aspect_ratio)
    : m_origin(origin), m_orientation(orientation),
      m_viewport_height(viewport_height), m_focal_length(focal_length),
      m_aspect_ratio(aspect_ratio) {
  update();
}

void Camera::update() {
  m_viewport = _calculate_viewport();
  m_coordinate_system = _calculate_coordinate_system();
}

Viewport Camera::_calculate_viewport() const {
  Viewport viewport;
  viewport.center = _calculate_viewport_center();
  viewport.height = m_viewport_height;
  viewport.width = m_viewport_height * m_aspect_ratio;
  return viewport;
}

CoordinateSystem Camera::_calculate_coordinate_system() const {
  Vec3 forward = unit_vector(m_viewport.center - m_origin);
  Vec3 right = unit_vector(cross(forward, Vec3(0, 1, 0)));
  Vec3 up = cross(right, forward);
  return CoordinateSystem{forward, right, up};
}

Vec3 Camera::_calculate_viewport_center() const {
  double pitch_rad = degree_to_radian(m_orientation.pitch_deg);
  double yaw_rad = degree_to_radian(m_orientation.yaw_deg);

  double viewport_x = m_focal_length * std::cos(pitch_rad) * std::sin(yaw_rad);
  double viewport_y = m_focal_length * std::sin(pitch_rad);
  double viewport_z = -m_focal_length * std::cos(pitch_rad) * std::cos(yaw_rad);

  return m_origin + Vec3(viewport_x, viewport_y, viewport_z);
}
