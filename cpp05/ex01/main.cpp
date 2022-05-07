#include "Bureaucrat.hpp"
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

  std::cout << "------------------------------------------" << std::endl;

  {
    try {
      Form c("asdf", 0, 140);
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }

  Bureaucrat a("jaham", 1);
  Bureaucrat b("weak jaham", 120);

  Form c("very important form", 10, 130);

  std::cout << c << std::endl;
  c.beSigned(b);
  c.beSigned(a);
  std::cout << c << std::endl;
}
