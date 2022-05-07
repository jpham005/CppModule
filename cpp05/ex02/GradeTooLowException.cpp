#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException() throw() : BureaucratException() {}

GradeTooLowException::GradeTooLowException(
    const std::string& bureaucrat_name,
    const std::string& form_name) throw()
    : BureaucratException(bureaucrat_name, form_name) {}

GradeTooLowException::~GradeTooLowException() throw() {}

const char* GradeTooLowException::what() const throw() {
  return "Grade too low";
}
