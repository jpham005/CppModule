/**
 * @file Animal.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-04
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Animal.hpp"

#include <iostream>

Animal::Animal() : type("animal") {
  std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type) {
  std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& assign) {
  this->type = assign.type;
  return (*this);
}

Animal::~Animal() {
  std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const {
  std::cout << "Animal Sound" << std::endl;
}

const std::string& Animal::getType() const {
  return (this->type);
}

void SetBrain(const std::string&) {}
