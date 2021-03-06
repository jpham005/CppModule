#include "Bureaucrat.hpp"

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

  Bureaucrat a("jaham", 1);
  Bureaucrat b("jaham", 150);

  try {
    a.DecreaseGrade();
    std::cout << a << std::endl;
    a.IncreaseGrade();
    std::cout << a.getName() << std::endl;
    std::cout << a.getGrade() << std::endl;
    a.IncreaseGrade();
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  try {
    b.IncreaseGrade();
    std::cout << b << std::endl;
    b.DecreaseGrade();
    std::cout << b << std::endl;
    b.DecreaseGrade();
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
}
