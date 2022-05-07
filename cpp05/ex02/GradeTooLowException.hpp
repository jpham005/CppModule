#pragma once

#include "BureaucratException.hpp"

class GradeTooLowException : public BureaucratException {
 public:
  GradeTooLowException() throw();
  GradeTooLowException(const std::string& bureaucrat_name,
                       const std::string& form_name) throw();
  ~GradeTooLowException() throw();

  const char* what() const throw();
};
