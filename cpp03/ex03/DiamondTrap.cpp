/**
 * @file DiamondTrap.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-04
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("no_name_clap_name"), FragTrap(), ScavTrap(), name_("no_name") {
  std::cout << "DiamondTrap Default Constructor called" << std::endl;
  this->hit_point_ = 100;
  this->energy_point_ = 50;
  this->attack_damage_ = 30;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name),
      ScavTrap(name),
      name_(name) {
  std::cout << "DiamondTrap String Constructor called" << std::endl;
  this->hit_point_ = 100;
  this->energy_point_ = 50;
  this->attack_damage_ = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
    : ClapTrap(copy.name_ + "_clap_name"),
      FragTrap(),
      ScavTrap(),
      name_(copy.name_) {
  std::cout << "DiamondTrap Copy Constructor called" << std::endl;
  this->hit_point_ = copy.hit_point_;
  this->energy_point_ = copy.energy_point_;
  this->attack_damage_ = copy.attack_damage_;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& assign) {
  std::cout << "DiamondTrap Copy Assign operator called" << std::endl;
  this->name_ = assign.name_;
  this->hit_point_ = assign.hit_point_;
  this->energy_point_ = assign.energy_point_;
  this->attack_damage_ = assign.attack_damage_;
  return (*this);
}

DiamondTrap::~DiamondTrap() {}

void DiamondTrap::whoAmI() {
  std::cout << "D_Name : " << this->name_ << " C_Name : " << ClapTrap::name_
            << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void DiamondTrap::MyInfo(void) const {
  std::cout << "name : " << this->name_
            << "\nclap name : " << ClapTrap::name_
            << "\nhit_point : " << this->hit_point_
            << "\nenergy_point : " << this->energy_point_
            << "\nattack_damage : " << this->attack_damage_
            << std::endl;
}
