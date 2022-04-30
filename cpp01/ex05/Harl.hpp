#pragma once
#ifndef HARL_HPP
#define HARL_HPP

/**
 * @file Harl.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-01
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include <string>

class Harl {
 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

 public:
  void complain(std::string level);
};

#endif
