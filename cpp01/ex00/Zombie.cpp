/**
 * @file Zombie.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie() {
  this->name_ = "unknown";
}

Zombie::Zombie(const std::string &name) {
  this->name_ = name;
}

Zombie::~Zombie() {
  std::cout << this->name_ << std::endl;
}

const char *kZombieNoise = "BraiiiiiiinnnzzzZ...";

void Zombie::announce(void) const {
  std::cout << this->name_ << ": " << kZombieNoise <<std::endl;
}
