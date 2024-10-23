#pragma once

#include "image.h"
#include "vec.h"
#include "world.h"

struct Viewport {
  Vec3 center;
  double height;
  double width;
  Vec3 horizontal_axis;
  Vec3 vertical_axis;
};

struct CoordinateSystem {
  Vec3 forward;
  Vec3 right;
  Vec3 up;
};

struct Orientation {
  double pitch_deg;
  double yaw_deg;
  double roll_deg;
};

struct DefocusDisk {
  double radius;
  Vec3 u;
  Vec3 v;
};

class Camera {
public:
  Camera(Vec3 origin, Orientation orientation, double viewport_height,
         double focal_length, double aspect_ratio, double defocus_angle);

  void update();

  Vec3 calculate_viewport_top_left() const;

  const CoordinateSystem &get_coordinate_system() const {
    return m_coordinate_system;
  }
  const Viewport &get_viewport() const { return m_viewport; }
  double get_aspect_ratio() const { return m_aspect_ratio; }
  const Vec3 &get_origin() const { return m_origin; }
  const DefocusDisk &get_defocus_disk() const { return m_defocus_disk; }

private:
  CoordinateSystem _calculate_coordinate_system() const;
  Vec3 _get_forward_vector() const;

  double _calculate_viewport_height() const;
  Vec3 _calculate_viewport_center() const;
  Viewport _calculate_viewport() const;
  DefocusDisk _calculate_defocus_disk() const;

private:
  Orientation m_orientation;
  CoordinateSystem m_coordinate_system;
  Viewport m_viewport;
  DefocusDisk m_defocus_disk;

  Vec3 m_origin;
  double m_vertical_fov_deg;
  double m_focal_length;
  double m_aspect_ratio;
  double m_defocus_angle;
};
