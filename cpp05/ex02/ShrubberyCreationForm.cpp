#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name) throw()
    : Form(name, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() throw() {}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  if (!this->is_signed_)
    throw Form::FormNotSignedException(executor.getName(), this->name_);

  if (executor.getGrade() > this->execute_grade_)
    throw Form::GradeTooLowException(executor.getName(), this->name_);

  std::string target = this->name_ + "_shrubbery";

  std::fstream fstream;
  fstream.open(target, std::fstream::out | std::fstream::trunc);

  fstream << "               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
___/\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//____" << std::endl;

  fstream.close();
}
