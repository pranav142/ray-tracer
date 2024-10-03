#include "vec.h"

#include <cmath>

double Vec3::x(void) const { return m_vec[0]; };

double Vec3::y(void) const { return m_vec[1]; };

double Vec3::z(void) const { return m_vec[2]; };

void Vec3::set_x(double x) { m_vec[0] = x; };

void Vec3::set_y(double y) { m_vec[1] = y; };

void Vec3::set_z(double z) { m_vec[2] = z; };

std::ostream &operator<<(std::ostream &os, const Vec3 &obj) {
  os << ' ' << obj.x() << ' ' << obj.y() << ' ' << obj.z();
  return os;
}

Vec3 operator-(const Vec3 &lhs, const Vec3 &rhs) {
  return Vec3(lhs.x() - rhs.x(), lhs.y() - rhs.y(), lhs.z() - rhs.z());
}

Vec3 operator+(const Vec3 &lhs, const Vec3 &rhs) {
  return Vec3(lhs.x() + rhs.x(), lhs.y() + rhs.y(), lhs.z() + lhs.z());
}

Vec3 operator/(const Vec3 &lhs, const double scalar) {
  return Vec3(lhs.x() / scalar, lhs.y() / scalar, lhs.z() / scalar);
}

Vec3 operator*(const Vec3 &lhs, const double scalar) {
  return Vec3(lhs.x() * scalar, lhs.y() * scalar, lhs.z() * scalar);
}

Vec3 operator*(const double scalar, const Vec3 &rhs) {
  return Vec3(rhs.x() * scalar, rhs.y() * scalar, rhs.z() * scalar);
}

double Vec3::magnitude() const {
  return std::sqrt(this->x() * this->x() + this->y() * this->y() +
                   this->z() * this->z());
}

void Vec3::normalize() {
  double magnitude = this->magnitude();
  if (magnitude > 0 && magnitude != 1) {
    *this = *this / magnitude;
  }
}

double dot(const Vec3 &a, const Vec3 &b) {
  return a.x() * b.x() + a.y() * b.y() + a.z() * b.z();
}

Vec3 unit_vector(const Vec3 &vector) { return vector / vector.magnitude(); }
