/**
 * @file WrongAnimal.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#pragma once

#include <string>

class WrongAnimal {
 protected:
  std::string type_;

 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& copy);
  WrongAnimal& operator=(const WrongAnimal& assign);
  ~WrongAnimal();

  void makeSound() const;
};

#endif
