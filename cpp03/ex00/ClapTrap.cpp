/**
 * @file ClapTrap.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-03
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "ClapTrap.hpp"

#include <iostream>

// static const unsigned int kMaxHitPoint = 10;

ClapTrap::ClapTrap() : name_("no_name") {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name_(name) {
  std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : name_(copy.name_) {
  std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& assign) {
  this->name_ = assign.name_;
  return (*this);
}

ClapTrap::~ClapTrap() {
  std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (this->energy_point_ <= 0) {
    std::cout << "no energy..." << std::endl;
    return;
  }

  std::cout << "ClapTrap" << this->name_ << "attacks" << target << ", causing"
            << this->attack_damage_ << "points of damage!" << std::endl;
  --(this->energy_point_);
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap" << this->name_ << "has taken" << amount
            << "points of damage!" << std::endl;

  if (amount > this->hit_point_)
    this->hit_point_ = 0;
  else
    this->hit_point_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->energy_point_ <= 0) {
    std::cout << "no energy..." << std::endl;
    return;
  }

  std::cout << "ClapTrap" << this->name_ << "is repaired" << amount
            << "points of damage!" << std::endl;

  --(this->energy_point_);
  // if (amount > kMaxHitPoint || amount)
}
