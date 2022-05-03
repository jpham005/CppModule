/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-02
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Point.hpp"

int main(void) {

  if (bsp(Point(0, 2), Point(1, 1), Point(2, 3), Point(1, 1.5)))
    std::cout << "true" << std::endl;
  else
    std::cout << "false" << std::endl;

  return (0);
}
