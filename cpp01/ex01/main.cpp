/**
 * @file main.cpp
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

int main(void) {
  Zombie *horde = zombieHorde(5, "jaham");

  for (int i = 0; i < 5; ++i) {
    horde[i].announce();
  }

  delete[] horde;

  system("leaks Moar_brainz\\!");
}
