#pragma once

#include <string>

#include "Form.hpp"

class Intern {
 private:
  enum { kShrubbery = 0, kRobotomy = 1, kPresidential = 2, kMaxFormNum = 3 };
  static const std::string forms_[kMaxFormNum];

 public:
  Form* makeForm(const std::string& name, const std::string& target);
};
