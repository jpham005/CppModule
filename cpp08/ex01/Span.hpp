#pragma once

#include <vector>

class Span {
 public:
  Span(unsigned int n);
  Span(const Span& origin);
  Span& operator=(const Span& rhs);
  ~Span();

  void addNumber(int n);
  int shortestSpan() const throw();
  int longestSpan() const throw();

 private:
  std::vector<int> nums_;
  unsigned int max_;
};
