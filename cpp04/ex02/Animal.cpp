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

Animal::Animal() : type("animal"), brain(new Brain()) {
  std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
    : type(copy.type), brain(new Brain(*(copy.brain))) {
  std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs) {
  this->type = rhs.type;
  *(this->brain) = *(rhs.brain);
  return (*this);
}

Animal::~Animal() {
  delete brain;
  std::cout << "Animal Destructor called" << std::endl;
}

const std::string& Animal::getType() const {
  return this->type;
}

Brain* Animal::GetBrain() const {
  return this->brain;
}
