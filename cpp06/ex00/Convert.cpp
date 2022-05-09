#include "Convert.hpp"

#include <iostream>

#include <cstdlib>

Convert::Convert(const char* str) throw()
    : input_(str), value_(strtod(str, &this->endptr_)) {}

Convert::~Convert() throw() {}

void Convert::PrintChar(char printing) const throw() {
  if (32 <= printing && printing <= 126)
    std::cout << "char: \'" << printing << "\'" << std::endl;
  else
    std::cout << "char: Non displayable" << std::endl;
}

void Convert::PrintInt(int printing) const throw() {
  std::cout << "int: " << printing << std::endl;
}

void Convert::PrintFloat(float printing) const throw() {
  std::cout << "float: " << printing;
  if (printing == static_cast<int>(printing))
    std::cout << ".0";

  std::cout << "f" << std::endl;
}

void Convert::PrintDouble(double printing) const throw() {
  std::cout << "double: " << printing;
  if (printing == static_cast<int>(printing))
    std::cout << ".0";
  std::cout << std::endl;
}

void Convert::PrintConverted() const throw() {
  double printing;

  if (this->input_ == this->endptr_)
    printing = *(this->input_);
  else
    printing = this->value_;

  this->PrintChar(static_cast<char>(printing));
  this->PrintInt(static_cast<int>(printing));
  this->PrintFloat(static_cast<float>(printing));
  this->PrintDouble(printing);
}

void Convert::PrintNan() const throw() {
  std::cout << "char: impossible" << "\n"
            << "int: impossible" << "\n";
  this->PrintFloat(NAN);
  this->PrintDouble(NAN);
}

void Convert::PrintInfPos() const throw() {
  std::cout << "char: Non displayable" << "\n"
            << "int: -2147483648" << "\n"
            << "float: inff" << "\n"
            << "double: inf" << std::endl;
}

void Convert::PrintInfNeg() const throw() {
  std::cout << "char: Non displayable" << "\n"
            << "int: -2147483648" << "\n"
            << "float: -inff" << "\n"
            << "double: -inf" << std::endl;
}

void Convert::PrintInffPos() const throw() {
  std::cout << "char: Non displayable" << "\n"
            << "int: -2147483648" << "\n"
            << "float: inff" << "\n"
            << "double: inff" << std::endl;
}  

void Convert::PrintInffNeg() const throw() {
  std::cout << "char: Non displayable" << "\n"
            << "int: -2147483648" << "\n"
            << "float: -inff" << "\n"
            << "double: -inff" << std::endl;
}

void Convert::PrintInput() const throw() {
  std::string input = this->input_;

  if (input == "nan")
    this->PrintNan();
  else if (input == "inf")
    this->PrintInfPos();
  else if (input == "-inf")
    this->PrintInfNeg();
  else if (input == "inff")
    this->PrintInffPos();
  else if (input == "-inff")
    this->PrintInffNeg();
  else
    PrintConverted();
}

// double printing = "inf"
// std::cout << printing results inf
