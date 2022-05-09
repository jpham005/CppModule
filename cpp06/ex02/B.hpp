#pragma once

#include "Base.hpp"

class B : public Base {
 private:
  const char me_;

 public:
  B();
  ~B();

  char GetMe() const throw();
};
