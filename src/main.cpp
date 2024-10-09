#include "image.h"

#include "camera.h"
#include "display.h"
#include "material.h"
#include "plane.h"
#include "sphere.h"
#include "world.h"
#include <memory>

int main() {
  const double aspect_ratio = 16.0 / 9.0;
  const size_t image_height = 500;
  const double view_port_height = 2.0;
  const double focal_length = 1.0;
  const int samples_per_pixel = 5;
  const int max_depth = 2;

  Image image = Image(image_height, aspect_ratio);
  Camera camera = Camera(aspect_ratio, view_port_height, focal_length, 0, 0, -1,
                         samples_per_pixel, max_depth);
  World world;

  // TODO: Make the albedo not a vec but a function that returns a vec
  std::shared_ptr<Material> red_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.1, 0.1));
  std::shared_ptr<Material> white_mirror =
      std::make_shared<Metal>(Vec3(0.7, 0.7, 0.7), 0.01);
  std::shared_ptr<Material> white_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.7, 0.7));
  std::shared_ptr<Material> glass = std::make_shared<Dielectric>(1.33, 0);

  world.add(std::make_shared<Sphere>(0, 0, 1.2, 0.5, red_lambertian));
  world.add(std::make_shared<Sphere>(-1, 0, 1, 0.5, white_mirror));
  world.add(std::make_shared<Sphere>(1, 0, 1, 0.5, glass));
  world.add(std::make_shared<Sphere>(0, -100.5, -1, 100, white_lambertian));

  camera.render(world, image);
  ppm_draw_image(image);
}
