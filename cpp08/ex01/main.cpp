#include <iostream>
#include <vector>

#include "Span.hpp"

int main() {
  Span span(5);

  try {
    span.longestSpan();
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    span.addNumber(6);
    span.longestSpan();
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  span.addNumber(3);
  span.addNumber(17);
  span.addNumber(9);
  span.addNumber(11);

  std::cout << span.shortestSpan() << std::endl;
  std::cout << span.longestSpan() << std::endl;

  std::cout << "================================" << std::endl;

  std::vector<int> vec;
  for (int i = 0; i < 500; i++)
    vec.push_back(rand() % 10);

  // for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
  //   std::cout << *i << std::endl;

  try {
    span.addNumber(vec.begin(), vec.end());
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "================================" << std::endl;

  Span sp(500);

  sp.addNumber(vec.begin(), vec.end());

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "================================" << std::endl;

  Span over(2);

  over.addNumber(INT_MAX);
  over.addNumber(INT_MIN);

  std::cout << over.shortestSpan() << std::endl;
  std::cout << over.longestSpan() << std::endl;
}
