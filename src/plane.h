#pragma once

#include "hittable.h"
#include "vec.h"

class InfinitePlane : public Hittable {
public:
  InfinitePlane(Vec3 normal, double plane_offset)
      : m_normal(normal), m_plane_offset(plane_offset) {}

  const Vec3 &normal() const;
  double plane_offset() const;
  bool intersects(const Ray &ray, const Interval &interval,
                  HitRecord &hit_record) const override;

private:
  Vec3 m_normal;
  double m_plane_offset;
};
