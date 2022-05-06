/**
 * @file ICharacter.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#pragma once

#include <string>

class AMateria;

class ICharacter {
 public:
  virtual ~ICharacter() {};
  virtual std::string const& getName() const = 0;
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter& target) = 0;
};

#endif
