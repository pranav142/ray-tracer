#pragma once
#include "vec.h"

class Ray {
public:
  Ray() : m_origin(Vec3(0, 0, 0)), m_direction(Vec3(0, 0, 0)) {}
  Ray(const Vec3 &origin, const Vec3 &direction)
      : m_origin(origin), m_direction(direction) {}

  const Vec3 &origin() const;
  const Vec3 &direction() const;

  Vec3 at(double t) const;

private:
  Vec3 m_origin;
  Vec3 m_direction;
};
