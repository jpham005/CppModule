/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-01
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <iostream>

#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "nothing to say..." << std::endl;
    return (0);
  }

  Harl harl;

  harl.complain(argv[1]);
}
