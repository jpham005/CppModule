#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(
    const std::string& target) throw()
    : Form("Presidential", 25, 5), target_(target) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm& origin) throw()
    : Form("Presidential", 25, 5), target_(origin.target_) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(
    const PresidentialPardonForm& rhs) throw() {
  this->target_ = rhs.target_;
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() throw() {}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
  if (!this->is_signed_)
    throw Form::FormNotSignedException(executor.getName(), this->name_);

  if (executor.getGrade() > this->execute_grade_)
    throw Form::GradeTooLowException(executor.getName(), this->name_);

  std::cout << this->target_ << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}
