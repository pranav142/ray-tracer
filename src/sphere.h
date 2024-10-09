#pragma once

#include "hittable.h"
#include "interval.h"
#include "material.h"
#include "ray.h"
#include "vec.h"
#include <memory>

class Sphere : public Hittable {
public:
  Sphere(double x, double y, double z, double radius,
         std::shared_ptr<Material>);

  const Vec3 &origin() const;
  double radius() const;

  bool intersects(const Ray &ray, const Interval &valid_interval,
                  HitRecord &hit_record) const override;

private:
  Vec3 m_origin;
  double m_radius;
  std::shared_ptr<Material> m_material;
};
