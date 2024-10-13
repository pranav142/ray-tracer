#pragma once

#include "camera.h"
#include "ray.h"
#include "vec.h"

Image ray_trace_render(const World &world, const Camera &camera,
                       double image_height, double samples_per_pixel,
                       int max_depth);

static Vec3 accumulate_ray_samples(size_t x, size_t y, double dx, double dy,
                                   const Camera &camera, const World &world,
                                   double samples_per_pixel, int max_depth);

Vec3 render_pixel(size_t x, size_t y, double dx, double dy,
                  const Camera &camera, const World &world,
                  double samples_per_pixel, int max_depth);

static Ray generate_ray(const Camera &camera, size_t x, size_t y, double dx,
                        double dy);

static Ray _get_random_ray_in_pixel(size_t x, size_t y, double dx, double dy,
                                    const Viewport &viewport,
                                    const CoordinateSystem &cs,
                                    const Vec3 &camera_origin);

static Vec3 _get_ray_color(const Ray &ray, const World &world, int max_depth);
