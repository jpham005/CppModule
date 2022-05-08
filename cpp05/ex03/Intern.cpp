#include "Intern.hpp"

#include <stdexcept>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

const std::string Intern::forms_[kMaxFormNum] = {
  "shrubbery creation",
  "robotomy request",
  "presidential pardon"
};

Form* Intern::makeForm(const std::string& name, const std::string& target) {
  std::size_t i = 0;
  while ((i < kMaxFormNum) && (this->forms_[i] != name))
    ++i;
  
  switch (i) {
    case kShrubbery:
      return new ShrubberyCreationForm(target);
    case kRobotomy:
      return new RobotomyRequestForm(target);
    case kPresidential:
      return new PresidentialPardonForm(target);
    default:
      throw std::invalid_argument("No matching form");
  }
}
