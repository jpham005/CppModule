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

#include "DiamondTrap.hpp"

int main(void) {
  {
    DiamondTrap a("A");
    a.MyInfo();

    a.attack("A");
    a.takeDamage(a.GetAttackDamage());
    a.beRepaired(5);
    std::cout << a.GetHitPoint() << std::endl;

    a.guardGate();
    a.highFivesGuys();
    a.whoAmI();
  }
  std::cout << "================================================" << std::endl;
  {
    DiamondTrap a("A");
    DiamondTrap b;
    b = a;
    b.MyInfo();
  }
  std::cout << "================================================" << std::endl;

  ScavTrap b("B");

  b.attack("B");
  b.takeDamage(b.GetAttackDamage());
  b.beRepaired(5);
  std::cout << b.GetHitPoint() << std::endl;
}
