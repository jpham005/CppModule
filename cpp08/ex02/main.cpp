#include <deque>
#include <iostream>
#include <list>
#include <stack>

#include "MutantStack.hpp"

int main() {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);  //[...] mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);

  std::list<int> list;
  list.push_back(5);
  list.push_back(17);
  std::cout << list.back() << std::endl;
  list.pop_back();
  std::cout << list.size() << std::endl;
  list.push_back(3);
  list.push_back(5);
  list.push_back(737);  //[...] list.push_back(0);
  std::list<int>::iterator itlist = list.begin();
  std::list<int>::iterator itliste = list.end();
  ++itlist;
  --itlist;
  while (itlist != itliste) {
    std::cout << *itlist << std::endl;
    ++itlist;
  }

  std::deque<int> deque;
  deque.push_back(5);
  deque.push_back(17);
  std::cout << deque.back() << std::endl;
  deque.pop_back();
  std::cout << deque.size() << std::endl;
  deque.push_back(3);
  deque.push_back(5);
  deque.push_back(737);  //[...] deque.push(0);
  std::deque<int>::iterator itdeque = deque.begin();
  std::deque<int>::iterator itdequee = deque.end();
  ++itdeque;
  --itdeque;
  while (itdeque != itdequee) {
    std::cout << *itdeque << std::endl;
    ++itdeque;
  }
  std::deque<int> d(mstack);
  return 0;
}
