#include "FormNotSignedException.hpp"

FormNotSignedException::FormNotSignedException() throw()
    : BureaucratException() {}

FormNotSignedException::FormNotSignedException(
    const std::string& bureucrat_name,
    const std::string& form_name) throw()
    : BureaucratException(bureucrat_name, form_name) {}

FormNotSignedException::~FormNotSignedException() throw() {}

const char* FormNotSignedException::what() const throw() {
  return "Form not signed";
}
