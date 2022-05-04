/**
 * @file Dog.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal() {
  std::cout << "Dog Constructor called" << std::endl;
  this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal() {
  std::cout << "Dog Copy Constructor called" << std::endl;
  this->type = copy.type;
}

Dog& Dog::operator=(const Dog& assign) {
  this->type = assign.type;
  return (*this);
}

Dog::~Dog() {
  std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "!!!BarkDogBark!!!" << std::endl;
}
