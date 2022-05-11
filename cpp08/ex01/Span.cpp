#include "Span.hpp"

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

int Span::shortestSpan() const {
  if (this->nums_.size() <= 1)
    throw std::range_error("need more elements");

  iterator i = this->nums_.begin(), j = ++this->nums_.begin(),
           end = this->nums_.end();

  unsigned int span = *j++ - *i++;
  while (j != end) {
    if (static_cast<unsigned int>(*j - *i) < span)
      span = *j - *i;
    ++i;
    ++j;
  }

  if (span > INT_MAX)
    throw std::overflow_error("span has been overflowed");
  return span;
}

int Span::longestSpan() const {
  if (this->nums_.size() <= 1)
    throw std::range_error("need more elements");

  return *(--this->nums_.end()) - *(this->nums_.begin());
}
