#include "Bureaucrat.hpp"
#include "BureaucratException.hpp"
#include "Intern.hpp"

int main() {
  {
    Bureaucrat strong("strong jaham", 1);
    Bureaucrat weak("weak jaham", 150);
    Intern someRandomIntern;
    Form* rrf;

    try {
      rrf = someRandomIntern.makeForm("asdf", "asdf");
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }

    try {
      rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
      return 1;
    }

    try {
     weak.signForm(*rrf);
    } catch (BureaucratException& e) {
      e.PrintError("sign");
    }

    try {
      strong.signForm(*rrf);
    } catch (BureaucratException& e) {
      e.PrintError("sign");
    }

    try {
      strong.executeForm(*rrf);
    } catch (BureaucratException& e) {
      e.PrintError("execute");
    } catch (std::exception& e) {
    std::cout << "Execution fail : " << e.what() << std::endl;
    }

    delete rrf;
  }

  system("leaks coffee_maker");
}
