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
 private:
  void SwapValue(Animal swap);

 protected:
  std::string type;
  Brain* brain;

 public:
  Animal();
  Animal(const Animal& copy);
  Animal& operator=(const Animal& assign);
  virtual ~Animal();

  virtual void makeSound() const;
  const std::string& getType() const;
  Brain* GetBrain() const;
};

#endif
