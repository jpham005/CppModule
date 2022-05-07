#pragma once

#include "BureaucratException.hpp"

class GradeTooHighException : public BureaucratException {
 public:
  GradeTooHighException() throw();
  GradeTooHighException(const std::string& bureucrat_name,
                        const std::string& form_name) throw();
  ~GradeTooHighException() throw();

  const char* what() const throw();
};
