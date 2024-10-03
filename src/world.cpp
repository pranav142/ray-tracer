#include "world.h"
#include "hittable.h"
#include "interval.h"
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
