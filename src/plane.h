#pragma once

#include "hittable.h"
#include "vec.h"
#include <memory>

class InfinitePlane : public Hittable {
public:
  InfinitePlane(Vec3 normal, double plane_offset,
                std::shared_ptr<Material> material)
      : m_normal(normal), m_plane_offset(plane_offset), m_material(material) {}

  const Vec3 &normal() const;
  double plane_offset() const;
  bool intersects(const Ray &ray, const Interval &interval,
                  HitRecord &hit_record) const override;

private:
  Vec3 m_normal;
  double m_plane_offset;
  std::shared_ptr<Material> m_material;
};
