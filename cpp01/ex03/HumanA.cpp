/**
 * @file HumanA.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
  : name_(name), weapon_(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
  std::cout << this->name_ << " attacks with their " << this->weapon_.getType()
            << std::endl;
}
