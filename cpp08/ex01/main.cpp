#include <iostream>

#include "Span.hpp"

int main() {
  Span span(5);

  try {
    span.addNumber(6);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << span.shortestSpan() << std::endl;
  std::cout << span.longestSpan() << std::endl;
}
