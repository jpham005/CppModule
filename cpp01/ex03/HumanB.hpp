#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

/**
 * @file HumanB.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */
#include <string>

#include "Weapon.hpp"

class HumanB {
private:
  std::string name_;
  Weapon      *weapon_;

public:
  HumanB();
  HumanB(std::string name);
  ~HumanB();

  void attack(void) const;
  void setWeapon(Weapon &weapon);
};

#endif
