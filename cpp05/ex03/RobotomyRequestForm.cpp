#include "RobotomyRequestForm.hpp"

#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(
    const std::string& target) throw()
    : Form("Robotomy", 72, 45), target_(target) {}

RobotomyRequestForm::RobotomyRequestForm(
    const RobotomyRequestForm& origin) throw()
    : Form("Robotomy", 72, 45), target_(origin.target_) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(
    const RobotomyRequestForm& rhs) throw() {
  this->target_ = rhs.target_;
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() throw() {}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
  if (!this->is_signed_)
    throw Form::FormNotSignedException(executor.getName(), this->name_);

  if (executor.getGrade() > this->execute_grade_)
    throw Form::GradeTooLowException(executor.getName(), this->name_);

  if (rand() % 2) {
    std::cout << this->target_ << " has been robotomized successfully"
              << std::endl;
  } else {
    std::cout << "robotomy failed" << std::endl;
  }
}
