#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(T type, int target) {
  typedef typename T::iterator TIter;

  TIter result = std::find(type.begin(), type.end(), target);
  
  if (result == type.end())
    throw std::invalid_argument("no such target");
  return *result;
}
