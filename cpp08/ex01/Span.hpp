#pragma once

#include <set>

class Span {
 private:
  typedef std::multiset<int>::iterator iterator;

  std::multiset<int> nums_;
  unsigned int max_;

 public:
  Span(unsigned int n);
  Span(const Span& origin);
  Span& operator=(const Span& rhs);
  ~Span();

  void addNumber(int n);
  void addNumber(iterator begin, iterator end);
  int shortestSpan() const;
  int longestSpan() const;
};
