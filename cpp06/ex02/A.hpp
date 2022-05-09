#pragma once

#include "Base.hpp"

class A : public Base {
 private:
  const char me_;

 public:
  A();
  ~A();

  char GetMe() const throw();
};
