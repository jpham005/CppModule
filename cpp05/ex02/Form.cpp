#include "Form.hpp"

Form::Form() throw()
    : name_("no name"),
      is_signed_(false),
      sign_grade_(kDefaultSignGrade),
      execute_grade_(kDefaultExecuteGrade) {}

Form::Form(const std::string& name, int sign_grade, int execute_grade)
    : name_(name),
      is_signed_(false),
      sign_grade_(sign_grade),
      execute_grade_(execute_grade) {
  if ((sign_grade < kMaxGrade) || (execute_grade < kMaxGrade))
    throw Form::GradeTooHighException();
  if ((sign_grade > kMinGrade) || (execute_grade > kMinGrade))
    throw Form::GradeTooLowException();
}

Form::Form(const Form& origin)
    : name_(origin.name_),
      is_signed_(origin.is_signed_),
      sign_grade_(origin.sign_grade_),
      execute_grade_(origin.execute_grade_) {}

Form::~Form() throw() {}

const std::string& Form::GetName() const throw() {
  return this->name_;
}

bool Form::GetIsSigned() const throw() {
  return this->is_signed_;
}

int Form::GetSignGrade() const throw() {
  return this->sign_grade_;
}

int Form::GetExecuteGrade() const throw() {
  return this->execute_grade_;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
  if (this->sign_grade_ < bureaucrat.getGrade())
    throw Form::GradeTooLowException(bureaucrat.getName(), this->name_);
  
  this->is_signed_ = true;
  std::cout << bureaucrat.getName() << " signed " << this->name_ << std::endl;
}

void Form::signForm(const Bureaucrat& bureaucrat) {
  if (this->execute_grade_ < bureaucrat.getGrade())
    throw Form::GradeTooLowException(bureaucrat.getName(), this->name_);

  this->is_signed_ = true;
}

std::ostream& operator<<(std::ostream& ostream, const Form& form) {
  ostream << "-----------------------------------------\n"
          << "name : " << form.GetName() << "\n"
          << "is signed : " << form.GetIsSigned() << "\n"
          << "sign grade : " << form.GetSignGrade() << "\n"
          << "execute grade : " << form.GetExecuteGrade()
          << "\n-----------------------------------------";
  return ostream;
}
