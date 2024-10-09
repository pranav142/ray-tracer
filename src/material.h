#pragma once

#include "hittable.h"
#include "ray.h"
#include "vec.h"

class Material {
public:
  virtual ~Material() = default;
  virtual bool scattered(const Ray &ray_in, const HitRecord &hit_record,
                         Vec3 &attenuation, Ray &scattered_ray) = 0;
};

class Lambertian : public Material {
public:
  Lambertian(Vec3 albedo) : m_albedo(albedo) {}
  bool scattered(const Ray &ray_in, const HitRecord &hit_record,
                 Vec3 &attenuation, Ray &scattered_ray) override;

private:
  Vec3 m_albedo;
};

class Metal : public Material {
public:
  Metal(Vec3 albedo, double fuzz)
      : m_albedo(albedo), m_fuzz(fuzz > 1   ? 1
                                 : fuzz > 0 ? fuzz
                                            : 0) {}
  bool scattered(const Ray &ray_in, const HitRecord &hit_record,
                 Vec3 &attenuation, Ray &scattered_ray) override;

private:
  Vec3 m_albedo;
  double m_fuzz;
};

class Dielectric : public Material {
public:
  Dielectric(double index_of_refraction, double roughness)
      : m_index_of_refraction(index_of_refraction), m_roughness(roughness) {}
  bool scattered(const Ray &ray_in, const HitRecord &hit_record,
                 Vec3 &attenuation, Ray &scattered_ray) override;

private:
  double m_index_of_refraction;
  double m_roughness;

  double _reflection_probability(double cosine, double refraction_index);
};
