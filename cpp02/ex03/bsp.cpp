/**
 * @file bsp.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-03
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <cmath>

#include "Point.hpp"

static Fixed GetSlope(const Point &p1, const Point &p2) {
  Fixed dx = p2.GetX() - p1.GetX();
  Fixed dy = p2.GetY() - p1.GetY();

  if (dx == 0)
    return (Fixed(-1));
  return ((dy / dx));
}

static Fixed GetIntercept(const Point &p, const Fixed &slope) {
  return (p.GetY() - slope * p.GetX());
}

static Fixed GetLen(const Point &p1, const Point &p2) {
  return (
    Fixed(
      sqrtf(
        (p2.GetX().toFloat() - p1.GetX().toFloat())
        * (p2.GetX().toFloat() - p1.GetX().toFloat())
        + (p2.GetY().toFloat() - p1.GetY().toFloat())
        * (p2.GetY().toFloat() - p1.GetY().toFloat())
      )
    )
  );
}

static bool IsTriangle(const Point &a, const Point &b, const Point &c) {
  Fixed l1(GetLen(a, b));
  Fixed l2(GetLen(b, c));
  Fixed l3(GetLen(c, a));

  Fixed total(l1 + l2 + l3);
  Fixed longest(Fixed::max(l1, Fixed::max(l2, l3)));
  return (total - longest > longest);
}

static bool IsSameSide(
  Point const &p, Point const &l1, Point const &l2, Point const &t
) {
  if (l1.GetY() == l2.GetY())
    return (
      (p.GetX() < l1.GetX() && t.GetX() < l1.GetX()) 
        || (p.GetX() > l1.GetX() && t.GetX() > l1.GetX())
    );

  Fixed slope(GetSlope(l1, l2));
  Fixed intercept(GetIntercept(l1, slope));

  return (
    ((slope * p.GetX() - p.GetY() + intercept)
    * (slope * t.GetX() - t.GetY() + intercept)) > 0
  );
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  if (!IsTriangle(a, b, c))
    return (false);

  return (
    IsSameSide(a, b, c, point)
    && IsSameSide(b, c, a, point)
    && IsSameSide(c, a, b, point)
  );
}
