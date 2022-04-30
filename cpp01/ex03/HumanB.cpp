/**
 * @file HumanB.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-04-30
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB() {
  this->name_ = "unknown";
  this->weapon_ = NULL;
}

HumanB::HumanB(std::string name) : name_(name) {
  this->weapon_ = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack(void) const {
  if (!(this->weapon_)) {
    std::cout << "no weapon" << std::endl;
    return;
  }

  std::cout << this->name_ << " attacks with their " << this->weapon_->getType()
            << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
  this->weapon_ = &weapon;
}
