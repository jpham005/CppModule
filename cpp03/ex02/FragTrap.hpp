/**
 * @file FragTrap.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap& copy);
  FragTrap& operator=(const FragTrap& assign);
  ~FragTrap();

  void highFivesGuys(void);
  void attack(const std::string& target);
};

#endif
