#pragma once

#include "interval.h"
#include "ray.h"
#include "vec.h"

struct HitRecord {
  double t;
  bool hit;
  Vec3 intersection_point;
  Vec3 normal;
  bool front_face;
};

class Hittable {
public:
  virtual ~Hittable() = default;
  virtual bool intersects(const Ray &ray, const Interval &interval,
                          HitRecord &hit_record) const = 0;
};

void set_no_hit(HitRecord &hit_record);

void set_face_normal(const Ray &ray, Vec3 &outward_normal,
                     HitRecord &hit_record);
