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

void Animal::SwapValue(Animal swap) {
  std::string temp_type = swap.type;
  Brain* temp_brain = swap.brain;

  swap.type = this->type;
  swap.brain = this->brain;

  this->type = temp_type;
  this->brain = temp_brain;
}

Animal& Animal::operator=(const Animal& assign) {
  this->SwapValue(assign);

  return (*this);
}

Animal::~Animal() {
  delete brain;
  std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const {
  std::cout << "Animal Sound" << std::endl;
}

const std::string& Animal::getType() const {
  return this->type;
}

Brain* Animal::GetBrain() const {
  return this->brain;
}
