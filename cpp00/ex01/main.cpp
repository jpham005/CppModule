/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */
#include "phonebook.hpp"
#include "util.hpp"

static int AddUserToPhoneBook(PhoneBook &phonebook) {
  std::string input[kDataNum];

  for (std::size_t i = kFirstName; i < kDataNum; ++i) {
    std::cout << std::setiosflags(std::ios_base::left) << std::setw(14) << GetFieldName(i) << " : ";
    std::cin >> input[i];
  }

  phonebook.AddUser(Contact(phonebook.GetLast(), input));
  return (1);
}

const char  *kFieldValueError = "Default Field Value Error";

int main(void) {

  if (kFieldWidth <= 0 || kFieldNum <= 0)
  {
    std::cerr << kFieldValueError << std::endl;
    return (1);
  }

  PhoneBook phonebook;

  AddUserToPhoneBook(phonebook);

  PrintSeperator();
  PrintFieldName();
  PrintSeperator();
  for (std::size_t i = 0; phonebook.GetUser(i).GetIndex() != static_cast<std::size_t>(-1); ++i) {
    PrintFieldValue(phonebook.GetUser(i));
  }
  return (0);
}
