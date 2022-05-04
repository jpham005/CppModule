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

static const unsigned int kMaxHitPoint = 100;

ClapTrap::ClapTrap()
    : name_("no_name"), hit_point_(10), energy_point_(10), attack_damage_(0) {
  std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name_(name), hit_point_(10), energy_point_(10), attack_damage_(0) {
  std::cout << "ClapTrap String Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
    : name_(copy.name_),
      hit_point_(copy.hit_point_),
      energy_point_(copy.energy_point_),
      attack_damage_(copy.attack_damage_) {
  std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& assign) {
  std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
  this->name_ = assign.name_;
  this->hit_point_ = assign.hit_point_;
  this->energy_point_ = assign.energy_point_;
  this->attack_damage_ = assign.attack_damage_;
  return (*this);
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (this->energy_point_ <= 0) {
    std::cout << "no energy..." << std::endl;
    return;
  }

  std::cout << "ClapTrap " << this->name_ << " attacks " << target
            << ", causing " << this->attack_damage_ << " points of damage!"
            << std::endl;
  --(this->energy_point_);
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << this->name_ << " has taken " << amount
            << " points of damage!" << std::endl;

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

  std::cout << "ClapTrap " << this->name_ << " is repaired " << amount
            << " points of damage!" << std::endl;

  --(this->energy_point_);
  if (amount > kMaxHitPoint - this->hit_point_)
    this->hit_point_ = kMaxHitPoint;
  else
    this->hit_point_ += amount;
}

unsigned int ClapTrap::GetHitPoint(void) {
  return (this->hit_point_);
}

unsigned int ClapTrap::GetEnergyPoint(void) {
  return (this->energy_point_);
}

unsigned int ClapTrap::GetAttackDamage(void) {
  return (this->attack_damage_);
}
