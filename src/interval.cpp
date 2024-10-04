#include "interval.h"

double Interval::min() const { return m_min; }

double Interval::max() const { return m_max; }

bool Interval::is_in_interval(double t) const {
  return (m_min <= t && t <= m_max);
}

double Interval::clamp(double val) const {
  if (val < m_min)
    return m_min;
  if (val > m_max)
    return m_max;
  return val;
}
