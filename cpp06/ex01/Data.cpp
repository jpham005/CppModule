#include "Data.hpp"

Data::Data() throw() : a(1123) {}

Data::Data(const Data& origin) throw() : a(origin.a) {}

Data& Data::operator=(const Data& origin) throw() {
  this->a = origin.a;
  return *this;
}

Data::~Data() throw() {}

int Data::GetData() const throw() {
  return this->a;
}

void Data::SetData(int n) throw() {
  this->a = n;
}
