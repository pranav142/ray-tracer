#pragma once

#include "hittable.h"
#include "interval.h"
#include "material.h"
#include "ray.h"
#include "vec.h"
#include <memory>

class Sphere : public Hittable {
public:
  Sphere(Vec3 origin, double radius, std::shared_ptr<Material> material)
      : m_origin(origin), m_radius(radius), m_material(material) {}

  bool intersects(const Ray &ray, const Interval &valid_interval,
                  HitRecord &hit_record) const override;

  const Vec3 &origin() const { return m_origin; }
  double radius() const { return m_radius; }

private:
  Vec3 m_origin;
  double m_radius;
  std::shared_ptr<Material> m_material;
};
