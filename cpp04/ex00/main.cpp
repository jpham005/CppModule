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

int main(void) {
  Animal *animal;

  animal = new Cat();
  animal->makeSound();
  delete animal;

  animal = new Dog();
  animal->makeSound();
  delete animal;

  std::cout << "===================================" << std::endl;

  Animal *cat = new Cat();
  Animal *dog = new Dog();

  *cat = *dog;
  cat->makeSound();
  std::cout << cat->Gettype() << std::endl;
  dog->makeSound();
  std::cout << dog->Gettype() << std::endl;
  delete cat;
  delete dog;

  return (0);
}
