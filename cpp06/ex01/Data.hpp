#pragma once

#include <cstdlib>

class Data {
 private:
  int a;

 public:
  Data() throw();
  Data(const Data& origin) throw();
  Data& operator=(const Data& origin) throw();
  ~Data() throw();

  int GetData() const throw();
  void SetData(int n) throw();
};
