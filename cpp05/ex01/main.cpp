#include "Form.hpp"

int main() {
  {
    try {
      Bureaucrat a("jaham", 1);
      std::cout << "success" << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    try {
      Bureaucrat a("jaham", -1);
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    try {
      Bureaucrat a("jaham", 151);
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }

  std::cout << "=================================================" << std::endl;

  Bureaucrat a("jaham", 1);
  Bureaucrat b("weak jaham", 140);

  Form c("formA", 135, 145);

  std::cout << c << std::endl;
  try {
    b.signForm(c);
  } catch (BureaucratException& e) {
    std::cout << "Bureaucrat " << e.GetBureaucratName() << " couldn't sign "
              << e.GetFormName() << " because " << e.what() << "." << std::endl;
  }

  std::cout << c << std::endl;

  try {
    a.signForm(c);
  } catch (BureaucratException& e) {
    std::cout << "Bureaucrat " << e.GetBureaucratName() << " couldn't sign "
              << e.GetFormName() << " because " << e.what() << "." << std::endl;
  }

  std::cout << c << std::endl;
}
