#pragma once

class Interval {
public:
  Interval(double min, double max) : m_min(min), m_max(max) {}
  double min() const;
  double max() const;
  bool is_in_interval(double t) const;
  double clamp(double val) const;

private:
  double m_min;
  double m_max;
};
