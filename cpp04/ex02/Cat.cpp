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

Cat::Cat(const Cat& copy) : Animal(copy) {
  std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& assign) {
  Animal::operator=(assign);
  return (*this);
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
  std::cout << "_mMMCat SoundMMm_" << std::endl;
  std::cout << this->brain->GetIdea(0) << std::endl;
}
