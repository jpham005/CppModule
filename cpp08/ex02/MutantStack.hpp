#pragma once

#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack {
 public:
  typedef Container container_type;
  typedef typename Container::value_type value_type;
  typedef typename Container::size_type size_type;
  typedef typename Container::reference reference;
  typedef typename Container::const_reference const_reference;
  typedef typename Container::iterator iterator;

  explicit MutantStack(const Container& cont = Container()) : c(cont) {}
  MutantStack(const MutantStack& other) : c(other.c) {}
  ~MutantStack() {}
  MutantStack& operator=(const MutantStack& other) { c = other.c; }

  // element acceess
  reference top() { return c.back(); }
  const_reference top() const { return c.back(); }

  // capacity
  bool empty() const { c.empty(); }
  size_type size() const { return c.size(); }

  // modifiers
  void push(const value_type& value) { c.push_back(value); }
  void pop() { c.pop_back(); }

  // iterator
  iterator begin() { return c.begin(); }
  iterator end() { return c.end(); }
  iterator rbegin() { return c.rbegin(); }
  iterator rend() { return c.rend(); }

  operator Container() { return c; }

 protected:
  Container c;
};

template <typename T, typename Container>
bool operator==(const std::stack<T, Container>& lhs,
                const std::stack<T, Container>& rhs) {
  return lhs.c == rhs.c;
}

template <typename T, typename Container>
bool operator!=(const std::stack<T, Container>& lhs,
                const std::stack<T, Container>& rhs) {
  return lhs.c != rhs.c;
}

template <typename T, typename Container>
bool operator<(const std::stack<T, Container>& lhs,
               const std::stack<T, Container>& rhs) {
  return lhs.c < rhs.c;
}

template <typename T, typename Container>
bool operator<=(const std::stack<T, Container>& lhs,
                const std::stack<T, Container>& rhs) {
  return lhs.c <= rhs.c;
}

template <typename T, typename Container>
bool operator>(const std::stack<T, Container>& lhs,
               const std::stack<T, Container>& rhs) {
  return lhs.c > rhs.c;
}

template <typename T, typename Container>
bool operator>=(const std::stack<T, Container>& lhs,
                const std::stack<T, Container>& rhs) {
  return lhs.c >= rhs.c;
}
