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
  this->brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal() {
  std::cout << "Cat Copy Constructor called" << std::endl;
  this->type = copy.type;
  this->brain = new Brain(*(copy.brain));
}

void Cat::SwapValue(Cat swap) {
  std::string temp_type = swap.type;
  Brain* temp_brain = swap.brain;

  swap.type = this->type;
  swap.brain = this->brain;

  this->type = temp_type;
  this->brain = temp_brain;
}

Cat& Cat::operator=(const Cat& assign) {
  this->SwapValue(assign);

  return (*this);
}

Cat::~Cat() {
  delete this->brain;
  std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
  std::cout << "_mMMCat SoundMMm_" << std::endl;
}

const Brain* Cat::GetBrain() const {
  return (this->brain);
}

void Cat::SetBrain(const std::string& ideas) {
  for (int i = 0; i < 100; ++i) { // no for expression
    this->brain[i].SetBrain(ideas);
  }
}
