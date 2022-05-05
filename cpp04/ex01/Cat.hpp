/**
 * @file Cat.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef CAT_HPP
#define CAT_HPP
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain* brain;

 public:
  Cat();
  Cat(const Cat& copy);
  Cat& operator=(const Cat& assign);
  ~Cat();

  void makeSound() const;
  void SwapValue(Cat swap);
  const Brain* GetBrain() const;
  void SetBrain(const std::string& ideas);
};

#endif
