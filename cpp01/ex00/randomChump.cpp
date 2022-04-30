/**
 * @file randomChump.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie zombie(name);

  zombie.announce();
}
