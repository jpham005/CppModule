#pragma once

#include <sstream>
#include <string>

class Convert {
 public:
  Convert(const char* str) throw();
  ~Convert() throw();

  void PrintConverted() const throw();

 private:
  const std::string input_;

  const std::string& ToCharString() const throw();
  const std::string& ToIntString() const throw();
  const std::string& ToFloatString() const throw();
  const std::string& ToDoubleString() const throw();

  Convert(const Convert& origin);
  Convert& operator=(const Convert& rhs);
};
