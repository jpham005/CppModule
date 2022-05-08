#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) throw()
    : Form("Shrubbery", 145, 137), target_(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(
    const ShrubberyCreationForm& origin) throw()
    : Form("Shrubbery", 145, 137), target_(origin.target_) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm& rhs) throw() {
  this->target_ = rhs.target_;
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() throw() {}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  if (!this->is_signed_)
    throw Form::FormNotSignedException(executor.getName(), this->name_);

  if (executor.getGrade() > this->execute_grade_)
    throw Form::GradeTooLowException(executor.getName(), this->name_);

  std::string target = this->target_ + "_shrubbery";

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
___/\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//____"
          << std::endl;

  fstream.close();
}
