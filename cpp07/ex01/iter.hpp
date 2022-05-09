#pragma once

#include <iostream>

template <typename T>
void Print(T& arg) {
  std::cout << arg;
}

template <typename T>
void iter(T* addr, std::size_t len, void func(T& arg1)) {
  for (std::size_t i = 0; i < len; ++i) {
    func(addr[i]);
  }
}

