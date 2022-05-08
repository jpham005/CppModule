#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 private:
  std::string target_;

 public:
  ShrubberyCreationForm(const std::string& target) throw();
  ShrubberyCreationForm(const ShrubberyCreationForm& origin) throw();
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs) throw();
  ~ShrubberyCreationForm() throw();

  void execute(Bureaucrat const& executor) const;
};
