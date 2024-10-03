#include "plane.h"

const Vec3 &InfinitePlane::normal() const { return m_normal; }

double InfinitePlane::plane_offset() const { return m_plane_offset; }

bool InfinitePlane::intersects(const Ray &ray, const Interval &interval,
                               HitRecord &hit_record) const {
  double denominator = dot(ray.direction(), m_normal);
  if (denominator == 0) {
    set_no_hit(hit_record);
    return false;
  }

  double numerator = m_plane_offset - dot(m_normal, ray.origin());
  double t = numerator / denominator;

  if (!interval.is_in_interval(t)) {
    set_no_hit(hit_record);
    return false;
  }

  hit_record.hit = true;
  hit_record.t = t;
  hit_record.intersection_point = ray.at(t);
  Vec3 outward_normal = unit_vector(m_normal);
  set_face_normal(ray, outward_normal, hit_record);
  return true;
}
