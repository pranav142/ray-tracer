#include "ray.h"

const Vec3 &Ray::origin() const { return m_origin; };

const Vec3 &Ray::direction() const { return m_direction; };

Vec3 Ray::at(double t) const { return m_origin + (m_direction * t); }
