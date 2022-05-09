#include "A.hpp"

A::A() : Base(), me_('A') {}

A::~A() {}

char A::GetMe() const throw() {
  return this->me_;
}
