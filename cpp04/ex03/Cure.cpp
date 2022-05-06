/**
 * @file Cure.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure") {
  this->is_empty_ = false;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
  Cure* ret = new Cure();
  ret->is_empty_ = this->is_empty_;

  return (ret);
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
