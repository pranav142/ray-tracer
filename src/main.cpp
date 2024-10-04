#include "image.h"

#include "camera.h"
#include "display.h"
#include "plane.h"
#include "sphere.h"
#include "world.h"
#include <memory>

int main() {
  const double aspect_ratio = 16.0 / 9.0;
  const size_t image_height = 500;
  const double view_port_height = 2.0;
  const double focal_length = 1.0;
  const int samples_per_pixel = 1;

  Image image = Image(image_height, aspect_ratio);
  Camera camera = Camera(aspect_ratio, view_port_height, focal_length, 0, 0, 0,
                         samples_per_pixel);
  World world;

  world.add(std::make_shared<Sphere>(-5, 0, 10, 2));
  world.add(std::make_shared<Sphere>(5, 0, 10, 1));
  // world.add(std::make_shared<InfinitePlane>(Vec3(0, 1, 0), -2));

  camera.render(world, image);
  ppm_draw_image(image);
}
