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

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap a("A");
  ClapTrap b("B");

  ClapTrap c(a);
  c.attack("none");

  c = b;
  c.attack("none");

  a.attack("B");
  b.takeDamage(a.GetAttackDamage());
  std::cout << "ep : " << a.GetEnergyPoint() << std::endl;
  std::cout << b.GetHitPoint() << std::endl;

  b.takeDamage(10);
  std::cout << b.GetHitPoint() << std::endl;

  b.beRepaired(1);
  b.beRepaired(1);
  b.beRepaired(1);
  b.beRepaired(1);
  b.beRepaired(1);
  b.beRepaired(1);
  std::cout << b.GetHitPoint() << std::endl;
  std::cout << "ep : " << b.GetEnergyPoint() << std::endl;

  b.attack("a");
  b.attack("a");
  b.attack("a");
  b.attack("a");
  std::cout << "ep : " << b.GetEnergyPoint() << std::endl;
  b.attack("a");
}
