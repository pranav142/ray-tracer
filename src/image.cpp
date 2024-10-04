#include "image.h"

size_t Image::width() const { return m_width; }

size_t Image::height() const { return m_height; }

double Image::aspect_ratio() const { return m_aspect_ratio; }

bool Image::_is_valid_pixel_coord(int x, int y) {
  return 0 <= x && x < m_width && 0 <= y && y < m_height;
}

Vec3 Image::get_pixel(int x, int y) const { return m_image[m_width * y + x]; }

void Image::set_pixel(int x, int y, Vec3 color) {
  m_image[m_width * y + x] = color;
}
