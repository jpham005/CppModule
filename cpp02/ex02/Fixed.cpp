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

#include <cmath>

const int Fixed::fractional_bits_ = 8;

Fixed::Fixed() : n_(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : n_(fixed.n_) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed::Fixed(const int n) {
  std::cout << "Int constructor called" << std::endl;
  this->n_ = n * (1 << fractional_bits_);
}

Fixed::Fixed(const float n) {
  std::cout << "Float constructor called" << std::endl;
  this->n_ = roundf(n * (1 << fractional_bits_));
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;

  this->n_ = fixed.n_;
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

float Fixed::toFloat(void) const {
  return (static_cast<float>(this->n_) / (1 << fractional_bits_));
}

int Fixed::toInt(void) const {
  return (this->n_ / (1 << fractional_bits_));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
  out << fixed.toFloat();

  return (out);
}


bool Fixed::operator>(const Fixed &fixed) const {
  return (this->n_ > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const {
  return (this->n_ < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const {
  return (this->n_ >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const {
  return (this->n_ <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const {
  return (this->n_ == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const {
  return (this->n_ != fixed.getRawBits());
}

const Fixed Fixed::operator+(const Fixed &fixed) const {
  return (Fixed(this->toFloat() + fixed.toFloat()));
}

const Fixed Fixed::operator-(const Fixed &fixed) const {
  return (Fixed(this->toFloat() - fixed.toFloat()));
}

const Fixed Fixed::operator*(const Fixed &fixed) const {
  return (Fixed(this->toFloat() * fixed.toFloat()));
}

const Fixed Fixed::operator/(const Fixed &fixed) const {
  return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed& Fixed::operator++() {
  ++this->n_;
  return (*this);
}

const Fixed Fixed::operator++(int dum) {
  Fixed temp(*this);

  (void) dum;
  ++this->n_;
  return (temp);
}

Fixed& Fixed::operator--() {
  ++this->n_;
  return (*this);
}

const Fixed Fixed::operator--(int dum) {
  Fixed temp(*this);

  (void) dum;
  ++this->n_;
  return (temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
  return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
  return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
  return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
  return (a.getRawBits() > b.getRawBits() ? a : b);
}
