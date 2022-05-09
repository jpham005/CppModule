#include "iter.hpp"

void Add_1(int& n) {
  n += 1;
}

int main() {
  int int_arr[] = {1, 2, 3, 4, 5};

  iter(int_arr, 5, Add_1);
  iter(int_arr, 5, Print);

  std::cout << "=================" << std::endl;

  // std::strnig()

  std::cout << std::endl;
}
