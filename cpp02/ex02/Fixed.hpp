/**
 * @file Fixed.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-02
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#ifndef FIXED_HPP
#define FIXED_HPP
#pragma once

#include <iostream>

class Fixed {
 private:
  int n_;
  static const int fractional_bits_;

 public:
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed(const int n);
  Fixed(const float n);
  ~Fixed();

  Fixed &operator=(const Fixed &fixed);

  bool operator>(const Fixed &fixed) const;
  bool operator<(const Fixed &fixed) const;
  bool operator>=(const Fixed &fixed) const;
  bool operator<=(const Fixed &fixed) const;
  bool operator==(const Fixed &fixed) const;
  bool operator!=(const Fixed &fixed) const;

  const Fixed operator+(const Fixed &fixed) const;
  const Fixed operator-(const Fixed &fixed) const;
  const Fixed operator*(const Fixed &fixed) const;
  const Fixed operator/(const Fixed &fixed) const;

  Fixed &operator++();
  const Fixed operator++(int dum);
  Fixed &operator--();
  const Fixed operator--(int dum);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

  static Fixed &min(Fixed &a, Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
