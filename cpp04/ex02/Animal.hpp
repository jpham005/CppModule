/**
 * @file Animal.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#pragma once

#include <string>

#include "Brain.hpp"

class Animal {
 protected:
  std::string type;
  Brain* brain; // no brain here

 public:
  Animal();
  Animal(const Animal& copy);
  Animal& operator=(const Animal& rhs);
  virtual ~Animal();

  virtual void makeSound() const = 0;
  const std::string& getType() const;
  Brain* GetBrain() const;
};

#endif
