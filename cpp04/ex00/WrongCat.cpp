/**
 * @file WrongCat.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "WrongCat.hpp"

#include <iostream>


WrongCat::WrongCat() : WrongAnimal() {
  this->type_ = "Cat";
  std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal() {
  this->type_ = copy.type_;
  std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& assign) {
  this->type_ = assign.type_;
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "WrongCat Sound" << std::endl;
}

