/**
 * @file Brain.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-05
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
  std::cout << "Brain Constructor called" << std::endl;

  for (int i = 0; i < 100; ++i) {
    this->ideas[i] = "food";
  }
}

Brain::Brain(const Brain& copy) {
  std::cout << "Brain Copy Constructor called" << std::endl;

  *this = copy;
}

Brain& Brain::operator=(const Brain& rhs) {
  std::cout << "Brain Copy Assignment operator called" << std::endl;

  for (int i = 0; i < 100; ++i) {
    this->ideas[i] = rhs.ideas[i];
  }

  return (*this);
}

Brain::~Brain() {
  std::cout << "Brain Destructor called" << std::endl;
}

void Brain::SetIdea(std::size_t index, const std::string& idea) {
    (this->ideas)[index] = idea;
}

const std::string& Brain::GetIdea(std::size_t index) const {
  return (this->ideas)[index];
}
