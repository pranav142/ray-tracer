#include "interval.h"

double Interval::min() const { return m_min; }

double Interval::max() const { return m_max; }

bool Interval::is_in_interval(double t) const {
  return (m_min <= t && t <= m_max);
}
