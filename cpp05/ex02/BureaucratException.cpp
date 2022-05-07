#include "BureaucratException.hpp"

BureaucratException::BureaucratException() throw()
    : bureaucrat_name_(""), form_name_("") {}

BureaucratException::BureaucratException(const std::string& bureaucrat,
                                         const std::string& form) throw()
    : bureaucrat_name_(bureaucrat), form_name_(form) {}

BureaucratException::~BureaucratException() throw() {}

const std::string& BureaucratException::GetBureaucratName() const throw() {
  return this->bureaucrat_name_;
}

const std::string& BureaucratException::GetFormName() const throw() {
  return this->form_name_;
}
