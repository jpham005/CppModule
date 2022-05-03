/**
 * @file Point.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-03
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef POINT_HPP
#define POINT_HPP
#pragma once

#include "Fixed.hpp"

class Point {
 private:
  const Fixed x;
  const Fixed y;

 public:
  Point();
  Point(float x, float y);
  Point(const Point &origin);
  Point &operator=(const Point &origin);
  ~Point();

  const Fixed &GetX(void) const;
  const Fixed &GetY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
