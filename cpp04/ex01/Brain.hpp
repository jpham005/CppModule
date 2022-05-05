/**
 * @file Brain.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#pragma once

#include <string>

class Brain {
 private:
  std::string ideas[100];

 public:
  Brain();
  Brain(const Brain& copy);
  Brain& operator=(const Brain& rhs);
  ~Brain();

  void SetBrain(const std::string& ideas);
};

#endif
