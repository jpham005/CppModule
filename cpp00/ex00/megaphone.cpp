#include <iostream>

const char *kNonArgMessage = "* Loud and unbearable feedback noise *";

void PrintStringUpper(const char *str) {
  while (*str) {
    std::cout << static_cast<char>(std::toupper(*str));
    ++str;
  }
}

int main(int argc, char **argv) {
  if (argc == 1) {
    PrintStringUpper(kNonArgMessage);
    std::cout << std::endl;
    return (0);
  }
  while (*(++argv)) {
    PrintStringUpper(*argv);
  }
  std::cout << std::endl;
}
