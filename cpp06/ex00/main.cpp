#include <iostream>

#include "Convert.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage : ./convert string" << std::endl;
    return 0;
  }

  Convert convert(argv[1]);
  convert.PrintConverted();
}
