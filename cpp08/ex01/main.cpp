#include <iostream>

#include "Span.hpp"

int main() {
  Span span(10);

  span.addNumber(5);
  span.addNumber(5);
  span.addNumber(5);
  span.addNumber(5);
  span.addNumber(5);
  span.addNumber(5);
  span.addNumber(5);
  span.addNumber(50);
  span.addNumber(5);
  std::cout << span.longestSpan() << std::endl;
}
