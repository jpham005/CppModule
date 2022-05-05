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
  this->brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal() {
  std::cout << "Dog Copy Constructor called" << std::endl;
  this->type = copy.type;
  this->brain = new Brain(*(copy.brain));
}

void Dog::SwapValue(Dog swap) {
  std::string temp_type = swap.type;
  Brain* temp_brain = swap.brain;

  swap.type = this->type;
  swap.brain = this->brain;

  this->type = temp_type;
  this->brain = temp_brain;
}

Dog& Dog::operator=(const Dog& assign) {
  this->SwapValue(assign);

  return (*this);
}

Dog::~Dog() {
  delete this->brain;
  std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
  std::cout << "_mMMCat SoundMMm_" << std::endl;
}

void Dog::SetBrain(const std::string& ideas) {
  
}
