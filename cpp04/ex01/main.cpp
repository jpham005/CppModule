/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-04
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

std::size_t kTotalAnimalNumber = 10;

int main(void) {
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;
  delete i;

  std::cout << "======================================" << std::endl;

  Animal *animals[kTotalAnimalNumber];

  for (std::size_t i = 0; i < kTotalAnimalNumber / 2; ++i) {
    animals[i] = new Dog();
  }

  for (std::size_t i = kTotalAnimalNumber / 2; i < kTotalAnimalNumber; ++i) {
    animals[i] = new Cat();
  }

  std::cout << "======================================" << std::endl;

  animals[7]->SetBrain("12345");

  for (std::size_t i = 0; i < kTotalAnimalNumber; ++i) {
    delete animals[i];
  }

  system("leaks SetWorldOnFire");

  return (0);
}
