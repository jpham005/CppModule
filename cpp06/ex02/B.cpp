#include "B.hpp"

B::B() : Base(), me_('B') {}

B::~B() {}

char B::GetMe() const throw() {
  return this->me_;
}
