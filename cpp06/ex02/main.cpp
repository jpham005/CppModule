#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
  switch (rand() % 3) {
    case 0:
      std::cout << "generated A" << std::endl;
      return new A;
    case 1:
      std::cout << "generated B" << std::endl;
      return new B;
    default:
      std::cout << "generated C" << std::endl;
      return new C;
  }
}

void identify(Base* p) {
  A* a = dynamic_cast<A*>(p);
  B* b = dynamic_cast<B*>(p);
  C* c = dynamic_cast<C*>(p);

  std::cout << "identifying with pointer..." << std::endl;
  if (a)
    std::cout << a->GetMe() << std::endl;
  else if (b)
    std::cout << b->GetMe() << std::endl;
  else
    std::cout << c->GetMe() << std::endl;
}

void identify(Base& p) {
  std::cout << "identifying with reference..." << std::endl;

  try {
    A a = dynamic_cast<A&>(p);
    std::cout << a.GetMe() << std::endl;
  } catch (...) {
  }

  try {
    B b = dynamic_cast<B&>(p);
    std::cout << b.GetMe() << std::endl;
  } catch (...) {
  }

  try {
    C c = dynamic_cast<C&>(p);
    std::cout << c.GetMe() << std::endl;
  } catch (...) {
  }
}

int main() {
  srand(time(NULL));

  Base* ptr = generate();

  identify(ptr);

  identify(*ptr);
}
