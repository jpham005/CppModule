#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException() throw()
    : BureaucratException() {}

GradeTooHighException::GradeTooHighException(
    const std::string& bureaucrat_name,
    const std::string& form_name) throw()
    : BureaucratException(bureaucrat_name, form_name) {}

GradeTooHighException::~GradeTooHighException() throw() {}

const char* GradeTooHighException::what() const throw() {
  return "Grade too high";
}
