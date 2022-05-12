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
  unsigned int shortestSpan() const;
  unsigned int longestSpan() const;


 private:
  typedef std::multiset<int>::iterator iterator;

  std::multiset<int> nums_;
  unsigned int max_;

  unsigned int GetSpan(iterator i, iterator j) const;
};
