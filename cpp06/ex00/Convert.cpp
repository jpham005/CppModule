#include "Convert.hpp"

#include <iostream>

Convert::Convert(const char* str) throw() : input_(str) {}

Convert::~Convert() throw() {}

const std::string& Convert::ToCharString() const throw() {
  
}

const std::string& Convert::ToIntString() const throw() {
  
}

const std::string& Convert::ToFloatString() const throw() {
  
}

const std::string& Convert::ToDoubleString() const throw() {
  
}

void Convert::PrintConverted() const throw() {
  std::cout << "char: " << this->ToCharString() << "\n"
            << "int: " << this->ToIntString() << "\n"
            << "float: " << this->ToFloatString() << "\n"
            << "double: " << this->ToDoubleString() << std::endl;
}
