#pragma once

#include <iostream>

#include "FormNotSignedException.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Form;

class Bureaucrat {
 private:
  enum { kMaxGrade = 1, kMinGrade = 150, kDefaultGrade = 100 };

  const std::string name_;
  int grade_;
  Bureaucrat& operator=(const Bureaucrat& rhs);

 public:
  Bureaucrat() throw();
  Bureaucrat(const std::string& name, int grade);
  Bureaucrat(const Bureaucrat& origin) throw();
  ~Bureaucrat() throw();

  const std::string& getName() const;
  int getGrade() const;
  void IncreaseGrade();
  void DecreaseGrade();
  void signForm(Form& form) const;

  typedef FormNotSignedException FormNotSignedException;
  typedef GradeTooHighException GradeTooHighException;
  typedef GradeTooLowException GradeTooLowException;
};

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& bureaucrat);
