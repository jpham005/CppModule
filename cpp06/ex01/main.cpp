#include <iostream>

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
}

int main() {
  Data* test = new Data;
  std::cout << "initial value: " << test->GetData() << std::endl;

  uintptr_t uinty = serialize(test);
  Data* daty = deserialize(uinty);

  daty->SetData(0);

  if (test == daty)
    std::cout << test << " == " << daty << "\n"
              << test->GetData() << " == " << daty->GetData() << std::endl;
}
