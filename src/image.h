#pragma once

#include <cmath>
#include <cstddef>
#include <stdint.h>
#include <vector>

struct Pixel {
  uint8_t r, g, b;
};

class Image {
private:
  size_t m_height;
  size_t m_width;
  double m_aspect_ratio;
  std::vector<Pixel> m_image;

  bool _is_valid_pixel_coord(int x, int y);

public:
  Image(double height, double aspect_ratio)
      : m_height(height),
        m_width(static_cast<size_t>(std::lround(height * aspect_ratio))),
        m_aspect_ratio(aspect_ratio), m_image(m_width * m_height) {}

  size_t width() const;
  size_t height() const;
  double aspect_ratio() const;

  void set_pixel(int x, int y, Pixel color);
  Pixel get_pixel(int x, int y) const;
};
