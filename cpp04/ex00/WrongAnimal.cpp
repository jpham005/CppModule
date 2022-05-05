/**
 * @file WrongAnimal.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-05
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type_("wrong animal") {
  std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type_(copy.type_) {
  std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& assign) {
  this->type_ = assign.type_;
  return (*this);
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal Sound" << std::endl;
}
