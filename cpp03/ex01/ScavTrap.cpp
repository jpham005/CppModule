/**
 * @file ScavTrap.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-04
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(), guard_mode_(false) {
  std::cout << "ScavTrap Default Contructor called" << std::endl;
  this->hit_point_ = 100;
  this->energy_point_ = 50;
  this->attack_damage_ = 20;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name), guard_mode_(false) {
  std::cout << "ScavTrap String Constructor called" << std::endl;
  this->hit_point_ = 100;
  this->energy_point_ = 50;
  this->attack_damage_ = 20;
}


ScavTrap::ScavTrap(const ScavTrap& copy)
    : ClapTrap(copy.name_), guard_mode_(copy.guard_mode_) {
  std::cout << "ScavTrap Copy Constructor called" << std::endl;
  this->hit_point_ = copy.hit_point_;
  this->energy_point_ = copy.energy_point_;
  this->attack_damage_ = copy.attack_damage_;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& assign) {
  std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
  this->name_ = assign.name_;
  this->hit_point_ = assign.hit_point_;
  this->energy_point_ = assign.energy_point_;
  this->attack_damage_ = assign.attack_damage_;
  this->guard_mode_ = assign.guard_mode_;
  return (*this);
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap is Gate keeper mode" << std::endl;
  this->guard_mode_ = true;
}

bool ScavTrap::GetGuardMode(void) {
  return (this->guard_mode_);
}


void ScavTrap::attack(const std::string& target) {
  if (this->energy_point_ <= 0) {
    std::cout << "no energy..." << std::endl;
    return;
  }

  std::cout << "ScavTrap " << this->name_ << " attacks " << target
            << ", causing " << this->attack_damage_ << " points of damage!"
            << std::endl;
  --(this->energy_point_);
}
