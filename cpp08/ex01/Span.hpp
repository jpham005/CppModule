#pragma once

#include <set>

class Span {
 public:
  Span(unsigned int n);
  Span(const Span& origin);
  Span& operator=(const Span& rhs);
  ~Span();

  void addNumber(int n);
  template <typename InputIterator>
  void addNumber(InputIterator begin, InputIterator end) {
    while (begin != end) {
      addNumber(*(begin));
      ++begin;
    }
  }
  int shortestSpan() const;
  int longestSpan() const;


 private:
  typedef std::multiset<int>::iterator iterator;

  std::multiset<int> nums_;
  unsigned int max_;
};
