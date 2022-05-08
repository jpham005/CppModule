#include "BureaucratException.hpp"

#include <iostream>

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

void BureaucratException::PrintError(const std::string& type) const throw() {
  if (type == "sign") {
    std::cout << bureaucrat_name_ << " couldn't sign " << form_name_
              << " because " << this->what() << "." << std::endl;
    return;
  }

  if (type == "execute") {
    std::cout << bureaucrat_name_ << " couldn't execute " << form_name_
              << " because " << this->what() << "." << std::endl;
  }
}
