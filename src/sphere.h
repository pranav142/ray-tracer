#pragma once

#include "hittable.h"
#include "interval.h"
#include "ray.h"
#include "vec.h"

class Sphere : public Hittable {
public:
  Sphere(double x, double y, double z, double radius);

  const Vec3 &origin() const;
  double radius() const;

  bool intersects(const Ray &ray, const Interval &valid_interval,
                  HitRecord &hit_record) const override;

private:
  Vec3 m_origin;
  double m_radius;
};
