#include "hittable.h"
#include "ray.h"

void set_no_hit(HitRecord &hit_record) {
  hit_record.t = 0;
  hit_record.hit = false;
  hit_record.intersection_point = Vec3(0, 0, 0);
  hit_record.normal = Vec3(0, 0, 0);
  hit_record.material = nullptr;
}

void set_face_normal(const Ray &ray, Vec3 &outward_normal,
                     HitRecord &hit_record) {
  if (dot(ray.direction(), outward_normal) > 0) {
    hit_record.normal = -1 * outward_normal;
    hit_record.front_face = false;
  } else {
    hit_record.normal = outward_normal;
    hit_record.front_face = true;
  }
}
