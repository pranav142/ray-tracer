#pragma once

#include "hittable.h"
#include <memory>
#include <vector>

class World : public Hittable {
public:
  void add(std::shared_ptr<Hittable> object);
  void clear();
  bool intersects(const Ray &ray, const Interval &interval,
                  HitRecord &hit_record) const override;

private:
  std::vector<std::shared_ptr<Hittable>> m_scene;
};
