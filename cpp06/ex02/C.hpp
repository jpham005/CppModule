#pragma once

#include "Base.hpp"

class C : public Base {
 private:
  const char me_;

 public:
  C();
  ~C();

  char GetMe() const throw();
};
