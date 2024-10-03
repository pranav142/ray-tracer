#include <image.h>
#include <iostream>

void ppm_draw_image(const Image &image) {
  std::cout << "P3\n" << image.width() << ' ' << image.height() << "\n255\n";

  for (size_t y = 0; y < image.height(); y++) {
    for (size_t x = 0; x < image.width(); x++) {
      Pixel pixel = image.get_pixel(x, y);
      std::cout << int(pixel.r) << ' ' << int(pixel.g) << ' ' << int(pixel.b)
                << '\n';
    }
  }
}
