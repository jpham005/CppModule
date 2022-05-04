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

template<class T>
class Test {
  public:
    Test(std::string& name, const T& value);
  private:
    std::string &name;
    const T value;
};

int main(void) {
  // Animal *animal;

  // animal = new Cat();
  // animal->makeSound();
  // delete animal;

  // animal = new Dog();
  // animal->makeSound();
  // delete animal;

  // Animal *cat = new Cat();
  // Animal *dog = new Dog();

  // *cat = *dog;
  // cat->makeSound();

  // delete cat;
  // delete dog;

  std::string dog("asdf");
  std::string cat("zxcv");

  Test<int> a(dog, 2);
  Test<int> b(cat, 3);

  a = b;

  return (0);
}
