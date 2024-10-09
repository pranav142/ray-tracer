#include "vec.h"
#include "utility.h"

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
  return Vec3(lhs.x() + rhs.x(), lhs.y() + rhs.y(), lhs.z() + rhs.z());
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

Vec3 operator*(const Vec3 lhs, const Vec3 &rhs) {
  return Vec3(lhs.x() * rhs.x(), lhs.y() * rhs.y(), lhs.z() * rhs.z());
}

double Vec3::magnitude() const {
  return std::sqrt(this->x() * this->x() + this->y() * this->y() +
                   this->z() * this->z());
}

bool Vec3::close_to_zero(double epsilon) const {
  return std::abs(this->x()) < epsilon && std::abs(this->y()) < epsilon &&
         std::abs(this->z()) < epsilon;
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

Vec3 random_vector(double min, double max) {
  return Vec3(random_double(min, max), random_double(min, max),
              random_double(min, max));
}

Vec3 random_unit_vector() {
  while (true) {
    Vec3 random_vec = random_vector(-1, 1);
    if (random_vec.magnitude() > 1e-180) {
      return unit_vector(random_vec);
    }
  }
}

Vec3 refract(const Vec3 &incident_vec, const Vec3 &normal, double ratio_n1_n2) {

  auto cos_theta = std::fmin(dot(-1 * incident_vec, normal), 1.0);
  Vec3 perpendicular_direction =
      ratio_n1_n2 * (incident_vec + cos_theta * normal);
  Vec3 parellel_direction =
      -std::sqrt(
          1 - std::abs(dot(perpendicular_direction, perpendicular_direction))) *
      normal;
  return perpendicular_direction + parellel_direction;
}
