#include "Span.hpp"

#include <iostream>
#include <stdexcept>

#include <climits>

Span::Span(unsigned int n) : max_(n) {}

Span::Span(const Span& origin) : max_(origin.max_) {
  this->nums_ = origin.nums_;
}

Span& Span::operator=(const Span& rhs) {
  this->max_ = rhs.max_;
  this->nums_ = rhs.nums_;
  return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
  if (this->max_ == this->nums_.size())
    throw std::length_error("nums already full");

  this->nums_.insert(n);
}

unsigned int Span::GetSpan(iterator i, iterator j) const {
  unsigned int ret;

  if (*j < 0) {
    ret = *j - *i;
  } else {
    ret = *j;
    ret -= *i;
  }

  return ret;
}

unsigned int Span::shortestSpan() const {
  if (this->nums_.size() <= 1)
    throw std::range_error("need more elements");

  iterator i = this->nums_.begin(), j = ++this->nums_.begin(),
           end = this->nums_.end();

  unsigned int ret = GetSpan(i, j);

  while (j != end) {
    unsigned int curr = GetSpan(i, j);
    if (ret > curr)
      ret = curr;
    ++i;
    ++j;
  }

  return ret;
}

unsigned int Span::longestSpan() const {
  if (this->nums_.size() <= 1)
    throw std::range_error("need more elements");

  unsigned int ret = *(--this->nums_.end());
  ret -= *(this->nums_.begin()); 

  return ret;
}
