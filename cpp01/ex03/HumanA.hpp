#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

/**
 * @file HumanA.hpp
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

class HumanA {
private:
  std::string name_;
  Weapon      &weapon_;

public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();

  void attack(void) const;
};

#endif
