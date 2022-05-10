#include <iostream>

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    Array<int> tmp = numbers;
    Array<int> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    for (int i = 0; i < MAX_VAL; i++) {
      if (test[i] != tmp[i]) {
        std::cout << "no match with same value, fail" << std::endl;
        break;
      }
    }

    for (int i = 0; i < MAX_VAL; i++) {
      if (numbers[i] != tmp[i]) {
        std::cout << "no match with changed vaule, success" << std::endl;
        break;
      }
    }

    const Array<int> consty(numbers);
    std::cout << "consty test: " << consty[0] << std::endl;
    // consty[0] = 1; // can't modify const value

    return 0;
}
