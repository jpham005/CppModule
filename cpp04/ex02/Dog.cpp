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

Dog::Dog(const Dog& copy) : Animal(copy) {
  std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& assign) {
  Animal::operator=(assign);
  return (*this);
}

Dog::~Dog() {
  std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
  std::cout << "!!!BarkDogBark!!!" << std::endl;
  std::cout << "Dog ideas : " << this->brain->GetIdea(0) << std::endl;
}
