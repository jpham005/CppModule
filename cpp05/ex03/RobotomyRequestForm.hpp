#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 private:
  std::string target_;

 public:
  RobotomyRequestForm(const std::string& target) throw();
  RobotomyRequestForm(const RobotomyRequestForm& origin) throw();
  RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs) throw();
  ~RobotomyRequestForm() throw();

  void execute(Bureaucrat const& executor) const;
};
