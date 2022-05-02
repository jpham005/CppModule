/**
 * @file Fixed.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-02
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Fixed.hpp"

#include <iostream>

const int Fixed::fractional_bits_ = 8;

Fixed::Fixed() : n_(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : n_(fixed.n_) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;

  this->n_ = fixed.getRawBits();
  return (*this);
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;

  return (this->n_);
}

void Fixed::setRawBits(int const raw) {
  this->n_ = raw;
}
