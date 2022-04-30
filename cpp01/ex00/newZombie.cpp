/**
 * @file newZombie.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <iostream>

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
  Zombie *ret = new Zombie(name);

  return (ret);
}
