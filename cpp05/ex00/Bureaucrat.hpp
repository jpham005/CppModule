#pragma once

#include <iostream>
#include <string>

#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat {
 private:
  const std::string name_;
  int grade_;
  enum { kMaxGrade = 1, kMinGrade = 150, kDefaultGrade = 100 };
  Bureaucrat& operator=(const Bureaucrat& rhs);

 public:
  Bureaucrat() throw();
  Bureaucrat(const std::string& name, int grade);
  Bureaucrat(const Bureaucrat& origin) throw();
  ~Bureaucrat();

  const std::string& getName() const;
  int getGrade() const;
  void IncreaseGrade();
  void DecreaseGrade();

  typedef GradeTooHighException GradeTooHighException;
  typedef GradeTooLowException GradeTooLowException;
};

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& bureaucrat);
