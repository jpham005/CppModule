/**
 * @file Point.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-03
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Point.hpp"


Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point &origin) : x(origin.x), y(origin.y) {}

Point &Point::operator=(const Point &origin) {
  const Fixed *x = &(this->x);
  const Fixed *y = &(this->y);

  *(const_cast<Fixed *>(x)) = origin.x;
  *(const_cast<Fixed *>(y)) = origin.y;
  return (*this);
}

Point::~Point() {}


const Fixed &Point::GetX(void) const {
  return (this->x);
}

const Fixed &Point::GetY(void) const {
  return (this->y);
}
