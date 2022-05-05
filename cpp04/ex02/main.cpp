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

std::size_t kTotalAnimalNumber = 9;

int main(void) {
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;
  delete i;

  std::cout << "======================================" << std::endl;

  Animal* animals[kTotalAnimalNumber];

  for (std::size_t i = 0; i < kTotalAnimalNumber / 2; ++i) {
    animals[i] = new Dog();
  }

  for (std::size_t i = kTotalAnimalNumber / 2; i < kTotalAnimalNumber; ++i) {
    animals[i] = new Cat();
  }

  std::cout << "======================================" << std::endl;

  {
    Dog cp = *(static_cast<Dog*>(animals[0]));

    animals[0]->GetBrain()->SetIdea(0, "12345");
    animals[1]->GetBrain()->SetIdea(0, "12345");
    animals[2]->GetBrain()->SetIdea(0, "12345");

    for (std::size_t i = 0; i < kTotalAnimalNumber; ++i) {
      animals[i]->makeSound();
      delete animals[i];
    }

    std::cout << "======================================" << std::endl;

    (&cp)->makeSound();
  }

  system("leaks AbstractClass");

  return (0);
}
