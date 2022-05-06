/**
 * @file Cure.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef CURE_HPP
#define CURE_HPP
#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
 private:
  Cure(const Cure& origin);
  Cure& operator=(const Cure& rhs);

 public:
  Cure();
  ~Cure();

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
