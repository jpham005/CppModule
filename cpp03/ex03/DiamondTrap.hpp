/**
 * @file DiamondTrap.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
  std::string name_;

 public:
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap& copy);
  DiamondTrap& operator=(const DiamondTrap& assign);
  ~DiamondTrap();

  void whoAmI();
  void attack(const std::string& target);
  void MyInfo(void) const;
};

#endif
