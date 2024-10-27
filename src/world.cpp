#include "world.h"
#include "hittable.h"
#include "interval.h"
#include "material.h"
#include "sphere.h"
#include "utility.h"
#include <memory>

void World::add(std::shared_ptr<Hittable> object) { m_scene.push_back(object); }

void World::clear() { m_scene.clear(); }

bool World::intersects(const Ray &ray, const Interval &interval,
                       HitRecord &hit_record) const {
  HitRecord tmp_record;
  bool hit_something = false;
  double closest_t = interval.max();

  for (const std::shared_ptr<Hittable> &object : m_scene) {
    if (object->intersects(ray, Interval(interval.min(), closest_t),
                           tmp_record)) {
      hit_something = true;
      closest_t = tmp_record.t;
      hit_record = tmp_record;
    }
  }

  return hit_something;
}

static World create_example_world() {
  std::shared_ptr<Material> red_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.1, 0.1));
  std::shared_ptr<Material> white_mirror =
      std::make_shared<Metal>(Vec3(0.7, 0.7, 0.7), 0.01);
  std::shared_ptr<Material> white_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.7, 0.7));
  std::shared_ptr<Material> glass = std::make_shared<Dielectric>(1.33, 0);

  World world;
  world.add(
      std::make_shared<Sphere>(Vec3(0, -100.5, -1), 100, white_lambertian));

  world.add(std::make_shared<Sphere>(Vec3(0, 0, -1.2), 0.5, red_lambertian));
  world.add(std::make_shared<Sphere>(Vec3(-1, 0, -1), 0.5, white_mirror));
  world.add(std::make_shared<Sphere>(Vec3(1, 0, -1), 0.5, glass));
  return world;
}

static World create_pretty_world() {
  World world;
  auto ground_material = std::make_shared<Lambertian>(Vec3(0.7, 0.7, 0.7));
  world.add(std::make_shared<Sphere>(Vec3(0, -1000, 0), 1000, ground_material));

  for (int a = -11; a < 11; a++) {
    for (int b = -11; b < 11; b++) {
      auto choose_mat = random_double();
      Vec3 center(a + 0.9 * random_double(), 0.2, b + 0.9 * random_double());

      if ((center - Vec3(4, 0.2, 0)).magnitude() > 0.9) {
        std::shared_ptr<Material> sphere_material;

        if (choose_mat < 0.8) {
          auto albedo = Vec3(random_double(), random_double(), random_double());
          sphere_material = std::make_shared<Lambertian>(albedo);
          world.add(std::make_shared<Sphere>(center, 0.2, sphere_material));
        } else if (choose_mat < 0.95) {
          auto albedo = Vec3(random_double(0.5, 1), random_double(0.5, 1),
                             random_double(0.5, 1));
          auto fuzz = random_double(0, 0.5);
          sphere_material = std::make_shared<Metal>(albedo, fuzz);
          world.add(std::make_shared<Sphere>(center, 0.2, sphere_material));
        } else {
          sphere_material = std::make_shared<Dielectric>(1.5, 0);
          world.add(std::make_shared<Sphere>(center, 0.2, sphere_material));
        }
      }
    }
  }

  auto material1 = std::make_shared<Dielectric>(1.5, 0);
  world.add(std::make_shared<Sphere>(Vec3(0, 1, 0), 1.0, material1));

  auto material2 = std::make_shared<Lambertian>(Vec3(0.4, 0.2, 0.1));
  world.add(std::make_shared<Sphere>(Vec3(-4, 1, 0), 1.0, material2));

  auto material3 = std::make_shared<Metal>(Vec3(0.7, 0.6, 0.5), 0.0);
  world.add(std::make_shared<Sphere>(Vec3(4, 1, 0), 1.0, material3));

  return world;
}
