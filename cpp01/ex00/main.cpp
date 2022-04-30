/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <iostream>

#include "Zombie.hpp"

int main(void) {
  std::cout << "----Testing randomChump----" << std::endl;
  randomChump("jaham");
  std::cout << "---------------------------\n" << std::endl;

  std::cout << "-----Testing newZombie-----" << std::endl;
  Zombie *jaewon = newZombie("jaewon");
  jaewon->announce();
  delete jaewon;
  std::cout << "---------------------------\n" << std::endl;

  system("leaks BraiiiiiiinnnzzzZ");
}
