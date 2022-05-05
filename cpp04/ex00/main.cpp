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
#include "WrongCat.hpp"

int main(void) {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  j->makeSound();
  i->makeSound();
  meta->makeSound();

  delete j;
  delete i;
  delete meta;

  std::cout << "========================================" << std::endl;

  const WrongAnimal* wrong_animal = new WrongAnimal();
  const WrongAnimal* wrong_cat = new WrongCat();

  wrong_cat->makeSound();
  wrong_animal->makeSound();

  delete wrong_animal;
  delete wrong_cat;

  return (0);
}
