/**
 * @file ScavTrap.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
  bool guard_mode_;

 public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& copy);
  ScavTrap& operator=(const ScavTrap& assign);
  ~ScavTrap();

  void guardGate();
  bool GetGuardMode(void);
  void attack(const std::string& target);
};

#endif
