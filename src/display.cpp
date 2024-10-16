#include "interval.h"
#include <cmath>
#include <image.h>
#include <iostream>

inline double linear_to_gamma(double linear) {
  if (linear >= 0) {
    return std::sqrt(linear);
  }

  return 0;
}
static void write_color(std::ostream &out, const Vec3 &pixel_color) {
  auto r = linear_to_gamma(pixel_color.x());
  auto g = linear_to_gamma(pixel_color.y());
  auto b = linear_to_gamma(pixel_color.z());

  static const Interval intensity(0.000, 0.999);
  int rbyte = int(256 * intensity.clamp(r));
  int gbyte = int(256 * intensity.clamp(g));
  int bbyte = int(256 * intensity.clamp(b));

  out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

void ppm_draw_image(const Image &image) {
  std::cout << "P3\n" << image.width() << ' ' << image.height() << "\n255\n";

  for (size_t y = 0; y < image.height(); y++) {
    for (size_t x = 0; x < image.width(); x++) {
      Vec3 pixel = image.get_pixel(x, y);
      write_color(std::cout, pixel);
    }
  }
}
