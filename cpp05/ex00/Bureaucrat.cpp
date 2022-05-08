#include "Bureaucrat.hpp"

#include <stdexcept>

Bureaucrat::Bureaucrat() throw() : name_("no name"), grade_(kDefaultGrade) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
    : name_(name), grade_(grade) {
  if (this->grade_ < 1)
    throw GradeTooHighException();
  if (this->grade_ > 150)
    throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& origin) throw()
    : name_(origin.name_), grade_(origin.grade_) {}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const {
  return this->name_;
}

int Bureaucrat::getGrade() const {
  return this->grade_;
}

void Bureaucrat::IncreaseGrade() {
  if (this->grade_ == 1)
    throw Bureaucrat::GradeTooHighException();

  --(this->grade_);
}

void Bureaucrat::DecreaseGrade() {
  if (this->grade_ == 150)
    throw Bureaucrat::GradeTooLowException();

  ++(this->grade_);
}

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& bureaucrat) {
  ostream << bureaucrat.getName() << ", bureaucrat grade "
          << bureaucrat.getGrade() << ".";
  return ostream;
}
