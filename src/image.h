#pragma once

#include "vec.h"
#include <cmath>
#include <cstddef>
#include <vector>

class Image {
private:
  size_t m_height;
  size_t m_width;
  double m_aspect_ratio;
  std::vector<Vec3> m_image;

  bool _is_valid_pixel_coord(int x, int y);

public:
  Image(double height, double aspect_ratio)
      : m_height(height),
        m_width(static_cast<size_t>(std::lround(height * aspect_ratio))),
        m_aspect_ratio(aspect_ratio), m_image(m_width * m_height) {}

  size_t width() const;
  size_t height() const;
  double aspect_ratio() const;

  void set_pixel(int x, int y, Vec3 color);
  Vec3 get_pixel(int x, int y) const;
};
