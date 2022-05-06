/**
 * @file Character.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
 private:
  enum { kMaxInven = 4 };
  AMateria* inven_[kMaxInven];
  std::string type_;

 public:
  Character();
  Character(const std::string& name);
  Character(const Character& origin);
  Character& operator=(const Character& rhs);
  ~Character();

  std::string const& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif
