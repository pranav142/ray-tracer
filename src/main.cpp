#include "image.h"

#include "camera.h"
#include "display.h"
#include "material.h"
#include "renderer.h"
#include "sphere.h"
#include "world.h"
#include <memory>

World create_example_world() {
  std::shared_ptr<Material> red_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.1, 0.1));
  std::shared_ptr<Material> white_mirror =
      std::make_shared<Metal>(Vec3(0.7, 0.7, 0.7), 0.01);
  std::shared_ptr<Material> white_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.7, 0.7));
  std::shared_ptr<Material> glass = std::make_shared<Dielectric>(1.33, 0);

  World world;
  world.add(std::make_shared<Sphere>(0, 0, -1.2, 0.5, red_lambertian));
  world.add(std::make_shared<Sphere>(-1, 0, -1, 0.5, white_mirror));
  world.add(std::make_shared<Sphere>(1, 0, -1, 0.5, glass));
  world.add(std::make_shared<Sphere>(0, -100.5, -1, 100, white_lambertian));
  return world;
}

int main() {
  const double aspect_ratio = 16.0 / 9.0;
  const size_t image_height = 500;
  const double vertical_fov_deg = 90;
  const double focal_length = 1;
  const int samples_per_pixel = 8;
  const int max_depth = 10;

  Vec3 camera_origin(-1, 1, 1.0);
  double camera_pitch_deg = -20;
  double camera_yaw_deg = 30;

  Orientation orientation{camera_pitch_deg, camera_yaw_deg, 0};
  Camera camera(camera_origin, orientation, vertical_fov_deg, focal_length,
                aspect_ratio);

  RayTracer ray_tracer(samples_per_pixel, max_depth);
  World world = create_example_world();
  Image image = ray_tracer.render(camera, world, image_height);

  ppm_draw_image(image);
}
