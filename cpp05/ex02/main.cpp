#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <stdlib.h>

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

  Bureaucrat strong("strong jaham", 1);
  Bureaucrat weak("weak jaham", 140);

  ShrubberyCreationForm shrubbery_form("hola");

  std::cout << shrubbery_form << std::endl;

  try {
    strong.executeForm(shrubbery_form);
  } catch (BureaucratException& e) {
    e.PrintError("execute");
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }

  std::cout << "===============================================" << std::endl;

  try {
    weak.signForm(shrubbery_form);
  } catch (BureaucratException& e) {
    e.PrintError("sign");
  }

  std::cout << shrubbery_form << std::endl;

  try {
    weak.executeForm(shrubbery_form);
  } catch (BureaucratException& e) {
    e.PrintError("execute");
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }

  std::cout << "===============================================" << std::endl;

  try {
    strong.executeForm(shrubbery_form);
  } catch (BureaucratException& e) {
    e.PrintError("execute");
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }

  std::cout << shrubbery_form << std::endl;

  std::cout << "=================================================" << std::endl;

  PresidentialPardonForm presidential("bob");

  std::cout << presidential << std::endl;
  try {
    weak.signForm(presidential);
  } catch (BureaucratException& e) {
    e.PrintError("sign");
  }

  std::cout << presidential << std::endl;

  try {
    strong.signForm(presidential);
  } catch (BureaucratException& e) {
    e.PrintError("sign");
  }

  std::cout << presidential << std::endl;

  try {
    strong.executeForm(presidential);
  } catch (BureaucratException& e) {
    e.PrintError("execute");
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }

  std::cout << presidential << std::endl;

  std::cout << "=================================================" << std::endl;

  RobotomyRequestForm robotomy("human");

  std::cout << robotomy << std::endl;
  try {
    weak.signForm(robotomy);
  } catch (BureaucratException& e) {
    e.PrintError("sign");
  }

  std::cout << robotomy << std::endl;

  try {
    strong.signForm(robotomy);
  } catch (BureaucratException& e) {
    e.PrintError("sign");
  }

  std::cout << robotomy << std::endl;

 srand(time(NULL));

 for (int i = 0; i < 10; ++i) {
  try {
    strong.executeForm(robotomy);
  } catch (BureaucratException& e) {
    e.PrintError("execute");
  } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
  }
 }

  std::cout << robotomy << std::endl;
}
