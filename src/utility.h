#pragma once

#include <cmath>
#include <random>

const double infinity = std::numeric_limits<double>::infinity();

inline double random_double() {
  static std::uniform_real_distribution<double> distribution(0.0, 1.0);
  static std::mt19937 generator;
  return distribution(generator);
}

inline double random_double(double min, double max) {
  return min + random_double() * (max - min);
}

inline double degree_to_radian(double degree) { return degree * M_PI / 180.0; }
