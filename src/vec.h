#pragma once

#include <iostream>

class Vec3 {
public:
  Vec3() : m_vec{0, 0, 0} {}
  Vec3(double x, double y, double z) : m_vec{x, y, z} {}

  double x(void) const;
  double y(void) const;
  double z(void) const;

  void set_x(double x);
  void set_y(double y);
  void set_z(double z);

  friend Vec3 operator-(const Vec3 &lhs, const Vec3 &rhs);
  friend Vec3 operator+(const Vec3 &lhs, const Vec3 &rhs);
  friend Vec3 operator*(const Vec3 &lhs, const double scalar);
  friend Vec3 operator*(const double scalar, const Vec3 &rhs);
  friend Vec3 operator*(const Vec3 lhs, const Vec3 &rhs);
  friend Vec3 operator/(const Vec3 &lhs, const double scalar);
  friend std::ostream &operator<<(std::ostream &os, const Vec3 &obj);

  bool close_to_zero(double epsilon) const;

  double magnitude() const;
  void normalize();

private:
  double m_vec[3];
};

double dot(const Vec3 &a, const Vec3 &b);

Vec3 cross(const Vec3 &a, const Vec3 &b);

Vec3 unit_vector(const Vec3 &vector);

Vec3 random_vector(double min, double max);

Vec3 random_unit_vector();

inline Vec3 reflect(const Vec3 &vin, const Vec3 &normal) {
  return vin - 2 * dot(vin, normal) * normal;
}

Vec3 refract(const Vec3 &incident_vec, const Vec3 &normal, double ratio_n1_n2);
