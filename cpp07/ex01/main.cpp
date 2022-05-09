#include "iter.hpp"

void Add_1(int& n) {
  n += 1;
}

void ToUpper(char& c) {
  c = std::toupper(c);
}

void ToLower(char& c) {
  c = std::tolower(c);
}

int main() {
  int int_arr[] = {1, 2, 3, 4, 5};

  iter(int_arr, 5, Add_1);
  iter(int_arr, 5, Print);

  std::cout << "\n=================" << std::endl;

  std::string s1 = "asdf", s2 = "ZXCV";

  iter(const_cast<char*>(s1.c_str()), 4, ToUpper);
  iter(const_cast<char*>(s2.c_str()), 4, ToLower);

  std::cout << "s1: " << s1 << "\n"
            << "s2: " << s2 << std::endl;

  std::cout << std::endl;
}
