/**
 * @file Ice.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef ICE_HPP
#define ICE_HPP
#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
 private:
  Ice(const Ice& origin);
  Ice& operator=(const Ice& rhs);

 public:
  Ice();
  ~Ice();

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
