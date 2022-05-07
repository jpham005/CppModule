#pragma once

#include "Bureaucrat.hpp"

class Form {
 private:
  enum {
    kMaxGrade = 1,
    kMinGrade = 150,
    kDefaultSignGrade = 50,
    kDefaultExecuteGrade = 100
  };

  const std::string name_;
  bool is_signed_;
  const int sign_grade_;
  const int execute_grade_;

  Form& operator=(const Form& rhs);

 public:
  Form() throw();
  Form(const std::string& name, int sign_grade, int execute_grade);
  Form(const Form& origin);
  ~Form() throw();

  const std::string& GetName() const throw();
  bool GetIsSigned() const throw();
  int GetSignGrade() const throw();
  int GetExecuteGrade() const throw();
  void TrySign(const Bureaucrat& bureaucrat);
  void beSigned(const Bureaucrat& bureaucrat);
  void signForm(const Bureaucrat& bureaucrat);

  typedef GradeTooHighException GradeTooHighException;
  typedef GradeTooLowException GradeTooLowException;
};

std::ostream& operator<<(std::ostream& ostream, const Form& form);
