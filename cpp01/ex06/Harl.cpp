/**
 * @file Harl.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-01
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Harl.hpp"

#include <iostream>

void Harl::debug(void) {
  std::cout
      << "[ DEBUG ]\n"
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-specialketchup burger.\n"
      << "I really do!\n"
      << std::endl;
}

void Harl::info(void) {
  std::cout
      << "[ INFO ]\n"
      << "I cannot believe adding extra bacon costs more money.\n"
      << "You didn’t put enough bacon in my burger!\n"
      << "If you did, I wouldn’t be asking for more!\n"
      << std::endl;
}

void Harl::warning(void) {
  std::cout
      << "[ WARNING ]\n"
      << "I think I deserve to have some extra bacon for free.\n"
      << "I’ve been coming foryears whereas you started working here "
      << "since last month.\n"
      << std::endl;
}

void Harl::error(void) {
  std::cout
      << "[ ERROR ]\n"
      << "This is unacceptable! I want to speak to the manager now.\n"
      << std::endl;
}

std::string levels[] = {
  "DEBUG",
  "INFO",
  "WARNING",
  "ERROR"
};

void Harl::complain(std::string level) {
  int i = 0;
  while ((i < 4) && levels[i] != level) {
    ++i;
  }

  switch (i) {
    case 0:
      this->debug();
    case 1:
      this->info();
    case 2:
      this->warning();
    case 3:
      this->error();
      break;
    default:
      std::cout << "nothing to say..." << std::endl;
  }
}
