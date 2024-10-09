#include "sphere.h"
#include "hittable.h"
#include "interval.h"
#include "material.h"
#include "vec.h"
#include <cmath>
#include <memory>

Sphere::Sphere(double x, double y, double z, double radius,
               std::shared_ptr<Material> material) {
  m_origin.set_x(x);
  m_origin.set_y(y);
  m_origin.set_z(z);
  m_radius = radius;
  m_material = material;
}

bool Sphere::intersects(const Ray &ray, const Interval &valid_interval,
                        HitRecord &hit_record) const {
  Vec3 ray_to_sphere = ray.origin() - m_origin;
  double a = dot(ray.direction(), ray.direction());
  double b = 2 * dot(ray.direction(), ray_to_sphere);
  double c = dot(ray_to_sphere, ray_to_sphere) - m_radius * m_radius;
  double discriminant = b * b - 4 * a * c;

  // TODO: Improve readibility of two no hit cases
  if (discriminant < 0) {
    set_no_hit(hit_record);
    return false;
  }

  double t = (-b - std::sqrt(discriminant)) / (2 * a);
  if (!valid_interval.is_in_interval(t)) {
    t = (-b + std::sqrt(discriminant)) / (2 * a);
    if (!valid_interval.is_in_interval(t)) {
      set_no_hit(hit_record);
      return false;
    }
  }

  hit_record.hit = true;
  hit_record.t = t;
  hit_record.intersection_point = ray.at(t);
  Vec3 outward_normal = unit_vector(hit_record.intersection_point - m_origin);
  hit_record.material = m_material;
  set_face_normal(ray, outward_normal, hit_record);

  return true;
}

const Vec3 &Sphere::origin() const { return m_origin; }

double Sphere::radius() const { return m_radius; }
