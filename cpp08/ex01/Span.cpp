#include "Span.hpp"

#include <algorithm>
#include <stdexcept>

Span::Span(unsigned int n) : max_(n) {}

Span::Span(const Span& origin) : max_(origin.max_) {
  this->nums_ = std::vector<int>(origin.nums_);
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

  this->nums_.push_back(n);
}

int Span::shortestSpan() const throw() {
  return 0; // sort & iterate
}

int Span::longestSpan() const throw() {
  return *std::max_element(this->nums_.begin(), this->nums_.end())
         - *std::min_element(this->nums_.begin(), this->nums_.end());
}
