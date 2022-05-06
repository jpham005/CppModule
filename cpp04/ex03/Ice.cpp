/**
 * @file Ice.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {
  this->is_empty_ = false;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
  return (new Ice());
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}
