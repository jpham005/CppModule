/**
 * @file Bureaucrat.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#pragma once

#include <string>

class Bureaucrat {
 private:
  const std::string name_;
  int grade_;
  enum { kMaxGrade = 1, kMinGrade = 150 };

 public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat& origin);
  Bureaucrat& operator=(const Bureaucrat& rhs);
  ~Bureaucrat();

  const std::string& getName() const;
  int getGrade() const;
  void IncreaseGrade(int grade);
  void DecreaseGrade(int grade);
};

#endif
