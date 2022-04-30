#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

/**
 * @file Weapon.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <string>

class Weapon {
private:
  std::string type_;

public:
  Weapon();
  Weapon(std::string type);
  ~Weapon();

  const std::string &getType(void) const;
  void              setType(const std::string &type);
};

#endif
