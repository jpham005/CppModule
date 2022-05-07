#include "ShrubberyCreationForm.hpp"

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

  ShrubberyCreationForm c("jaham");

  std::cout << c << std::endl;
  try {
    c.beSigned(b);
  } catch (BureaucratException& e) {
    std::cout << "Bureaucrat " << e.GetBureaucratName() << " couldn't sign "
              << e.GetFormName() << " because " << e.what() << "." << std::endl;
  }

  try {
    c.execute(b);
  } catch (BureaucratException& e) {
    std::cout << "Bureaucrat " << e.GetBureaucratName() << " couldn't execute "
              << e.GetFormName() << " because " << e.what() << "." << std::endl;
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }

  try {
    c.beSigned(a);
  } catch (BureaucratException& e) {
    std::cout << "Bureaucrat " << e.GetBureaucratName() << " couldn't sign "
              << e.GetFormName() << " because " << e.what() << "." << std::endl;
  }

  try {
    c.execute(b);
  } catch (BureaucratException& e) {
    std::cout << "Bureaucrat " << e.GetBureaucratName() << " couldn't execute "
              << e.GetFormName() << " because " << e.what() << "." << std::endl;
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }

  try {
    c.execute(a);
  } catch (BureaucratException& e) {
    std::cout << "Bureaucrat " << e.GetBureaucratName() << " couldn't execute "
              << e.GetFormName() << " because " << e.what() << "." << std::endl;
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }

  std::cout << c << std::endl;
}
