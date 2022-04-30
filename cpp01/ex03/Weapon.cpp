/**
 * @file Weapon.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) {
  this->type_ = type;
}

Weapon::~Weapon() {}

const std::string &Weapon::getType(void) const {
  return (this->type_);
}

void Weapon::setType(const std::string &type) {
  this->type_ = type;
}
