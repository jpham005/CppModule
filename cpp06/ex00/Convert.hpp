#pragma once

#include <string>

class Convert {
 public:
  Convert(const char* str) throw();
  ~Convert() throw();

  void PrintInput() const throw();

 private:
  const char* input_;
  const double value_;
  char* endptr_;

  void PrintChar(char printing) const throw();
  void PrintInt(int printing) const throw();
  void PrintFloat(float printing) const throw();
  void PrintDouble(double printing) const throw();
  void PrintNan() const throw();
  void PrintInfPos() const throw();
  void PrintInfNeg() const throw();
  void PrintInffPos() const throw();
  void PrintInffNeg() const throw();
  void PrintConverted() const throw();

  Convert(const Convert& origin);
  Convert& operator=(const Convert& rhs);
};
