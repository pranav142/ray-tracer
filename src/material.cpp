#include "material.h"
#include "hittable.h"
#include "utility.h"
#include "vec.h"
#include <cmath>

bool Lambertian::scattered(const Ray &ray_in, const HitRecord &hit_record,
                           Vec3 &attenuation, Ray &scattered_ray) {
  Vec3 random_unit_vec = random_unit_vector() + hit_record.normal;
  if (random_unit_vec.close_to_zero(1e-8)) {
    random_unit_vec = hit_record.normal;
  }
  if (dot(random_unit_vec, hit_record.normal) < 0) {
    random_unit_vec = -1 * random_unit_vec;
  }

  scattered_ray = Ray(hit_record.intersection_point, random_unit_vec);
  attenuation = m_albedo;
  return true;
}

bool Metal::scattered(const Ray &ray_in, const HitRecord &hit_record,
                      Vec3 &attenuation, Ray &scattered_ray) {
  Vec3 reflected_direction = reflect(ray_in.direction(), hit_record.normal) +
                             (m_fuzz * random_unit_vector());
  scattered_ray = Ray(hit_record.intersection_point, reflected_direction);
  attenuation = m_albedo;
  return dot(reflected_direction, hit_record.normal) > 0;
}

bool Dielectric::scattered(const Ray &ray_in, const HitRecord &hit_record,
                           Vec3 &attenuation, Ray &scattered_ray) {
  double eta =
      hit_record.front_face ? 1 / m_index_of_refraction : m_index_of_refraction;

  Vec3 unit_direction = unit_vector(ray_in.direction());
  Vec3 refracted_direction =
      refract(unit_direction, unit_vector(hit_record.normal), eta);

  double cos_theta = std::min(dot(-1 * unit_direction, hit_record.normal), 1.0);
  double sin_theta = std::sqrt(1.0 - cos_theta * cos_theta);

  bool cannot_refract = eta * sin_theta > 1.0;
  Vec3 direction;

  if (cannot_refract ||
      _reflection_probability(cos_theta, eta) > random_double()) {
    direction = reflect(ray_in.direction(), hit_record.normal) +
                (m_roughness * random_unit_vector());
  } else {
    direction = refract(unit_direction, hit_record.normal, eta);
  }

  attenuation = Vec3(1.0, 1.0, 1.0);
  scattered_ray = Ray(hit_record.intersection_point, direction);
  return true;
}

double Dielectric::_reflection_probability(double cosine,
                                           double refraction_index) {
  auto r0 = (1 - refraction_index) / (1 + refraction_index);
  r0 = r0 * r0;
  return r0 + (1 - r0) * std::pow((1 - cosine), 5);
}
