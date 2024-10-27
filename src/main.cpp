#include "image.h"

#include "camera.h"
#include "display.h"
#include "examples.h"
#include "renderer.h"
#include "vec.h"
#include "world.h"
#include <chrono>
#include <iostream>

int main() {
  const double aspect_ratio = 16.0 / 9.0;
  const size_t image_height = 700;
  const double vertical_fov_deg = 20;
  const double focal_length = 10;
  const int samples_per_pixel = 1;
  const int max_depth = 8;
  const double defous_angle = 0;

  Vec3 camera_origin(19, 2, 3);
  double camera_pitch_deg = -3;
  double camera_yaw_deg = -80;
  Orientation orientation{camera_pitch_deg, camera_yaw_deg, 0};

  Camera camera(camera_origin, orientation, vertical_fov_deg, focal_length,
                aspect_ratio, defous_angle);
  RayTracer ray_tracer(samples_per_pixel, max_depth);

  World world = create_pretty_world();

  auto start = std::chrono::high_resolution_clock::now();
  Image image = ray_tracer.render(camera, world, image_height);
  auto stop = std::chrono::high_resolution_clock::now();

  auto duration =
      std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

  std::clog << duration.count() << '\n';

  ppm_draw_image(image);
}
