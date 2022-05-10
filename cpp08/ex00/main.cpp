#include <deque>
#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

int main() {
  std::cout << "stack test" << std::endl;

  std::vector<int> vec;

  vec.push_back(1);
  vec.push_back(4);
  vec.push_back(3);
  vec.push_back(2);
  vec.push_back(1);

  std::cout << easyfind(vec, 2) << std::endl;
  try {
    easyfind(vec, 0);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "deque test" << std::endl;

  std::deque<int> deq;

  deq.push_back(1);
  deq.push_back(4);
  deq.push_back(3);
  deq.push_back(2);
  deq.push_back(1);

  std::cout << easyfind(deq, 2) << std::endl;
  try {
    easyfind(deq, 0);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "list test" << std::endl;

  std::list<int> list;

  list.push_back(1);
  list.push_back(4);
  list.push_back(3);
  list.push_back(2);
  list.push_back(1);

  std::cout << easyfind(list, 2) << std::endl;
  try {
    easyfind(list, 0);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}
