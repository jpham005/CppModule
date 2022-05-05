/**
 * @file WrongCat.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  WrongCat(const WrongCat& copy);
  WrongCat& operator=(const WrongCat& assign);
  ~WrongCat();

  void makeSound() const;
};

#endif
