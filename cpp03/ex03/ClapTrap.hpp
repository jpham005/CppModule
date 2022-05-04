/**
 * @file ClapTrap.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-03
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#pragma once

#include <string>

class ClapTrap {
 protected:
  std::string name_;
  unsigned int hit_point_;
  unsigned int energy_point_;
  unsigned int attack_damage_;

 public:
  ClapTrap();
  ClapTrap(const std::string& name);
  ClapTrap(const ClapTrap& copy);
  ClapTrap& operator=(const ClapTrap& assign);
  virtual ~ClapTrap();

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  unsigned int GetHitPoint(void);
  unsigned int GetEnergyPoint(void);
  unsigned int GetAttackDamage(void);
};

#endif
