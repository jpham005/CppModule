#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 private:
  ShrubberyCreationForm(const ShrubberyCreationForm& origin);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

 public:
  ShrubberyCreationForm(const std::string& name) throw();
  ~ShrubberyCreationForm() throw();

  void execute(Bureaucrat const& executor) const;
};
