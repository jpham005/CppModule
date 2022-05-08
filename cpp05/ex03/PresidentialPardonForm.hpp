#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form {
 private:
  std::string target_;

 public:
  PresidentialPardonForm(const std::string& target) throw();
  PresidentialPardonForm(const PresidentialPardonForm& origin) throw();
  PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs) throw();
  ~PresidentialPardonForm() throw();

  void execute(Bureaucrat const& executor) const;
};
