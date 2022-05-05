/**
 * @file Dog.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef DOG_HPP
#define DOG_HPP
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain* brain;

 public:
  Dog();
  Dog(const Dog& copy);
  Dog& operator=(const Dog& assign);
  ~Dog();

  void makeSound() const;
  void SwapValue(Dog swap);
  void SetBrain(const std::string& ideas);
};

#endif
