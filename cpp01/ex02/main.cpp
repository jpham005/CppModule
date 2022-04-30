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
#include <string>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "-------------------------------" << std::endl;
  std::cout << &str << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &stringREF << std::endl;
  std::cout << "-------------------------------\n" << std::endl;

  std::cout << "-------------------------------" << std::endl;
  std::cout << str << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << stringREF << std::endl;
  std::cout << "-------------------------------\n" << std::endl;
}
