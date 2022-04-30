/**
 * @file zombieHored.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
  Zombie *zombieHorde = new Zombie[n];

  for (int i = 0; i < n; ++i) {
    zombieHorde[i].SetName(name);
  }

  return (zombieHorde);
}
