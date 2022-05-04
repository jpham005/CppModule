/**
 * @file FragTrap.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
  std::cout << "FragTrap Default Contructor called" << std::endl;
  this->hit_point_ = 100;
  this->energy_point_ = 100;
  this->attack_damage_ = 30;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "FragTrap String Constructor called" << std::endl;
  this->hit_point_ = 100;
  this->energy_point_ = 100;
  this->attack_damage_ = 30;
}


FragTrap::FragTrap(const FragTrap& copy)
    : ClapTrap(copy.name_) {
  std::cout << "FragTrap Copy Constructor called" << std::endl;
  this->hit_point_ = copy.hit_point_;
  this->energy_point_ = copy.energy_point_;
  this->attack_damage_ = copy.attack_damage_;
}

FragTrap& FragTrap::operator=(const FragTrap& assign) {
  std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
  this->name_ = assign.name_;
  this->hit_point_ = assign.hit_point_;
  this->energy_point_ = assign.energy_point_;
  this->attack_damage_ = assign.attack_damage_;
  return (*this);
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
  if (this->energy_point_ <= 0) {
    std::cout << "no energy..." << std::endl;
    return;
  }

  std::cout << "FragTrap " << this->name_ << " attacks " << target
            << ", causing " << this->attack_damage_ << " points of damage!"
            << std::endl;
  --(this->energy_point_);
}

void FragTrap::highFivesGuys(void) {
  std::cout << "!!! HighFives !!!" << std::endl;
}
