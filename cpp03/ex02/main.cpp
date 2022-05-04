/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-03
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <iostream>

#include "FragTrap.hpp"

int main(void) {
  FragTrap a("A");

  a.attack("A");
  a.takeDamage(a.GetAttackDamage());
  a.beRepaired(5);
  std::cout << a.GetHitPoint() << std::endl;
}
