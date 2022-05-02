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

class Fixed {
 private:
  int              n_;
  static const int fractional_bits_;

 public:
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  ~Fixed();

  int  getRawBits(void) const;
  void setRawBits(int const raw);
};

#endif
