#pragma once

// ex02

#include "BureaucratException.hpp"

class FormNotSignedException : public BureaucratException {
 public:
  FormNotSignedException() throw();
  FormNotSignedException(const std::string& bureucrat_name,
                         const std::string& form_name) throw();
  ~FormNotSignedException() throw();

  const char* what() const throw();
};
