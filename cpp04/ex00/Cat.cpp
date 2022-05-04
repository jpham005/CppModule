/**
 * @file Cat.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-04
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal() {
  std::cout << "Cat Constructor called" << std::endl;
  this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal() {
  std::cout << "Cat Copy Constructor called" << std::endl;
  this->type = copy.type;
}

Cat& Cat::operator=(const Cat& assign) {
  this->type = assign.type;
  return (*this);
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "_mMMCat SoundMMm_" << std::endl;
}
