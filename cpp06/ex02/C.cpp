#include "C.hpp"

C::C() : Base(), me_('C') {}

C::~C() {}

char C::GetMe() const throw() {
  return this->me_;
}
