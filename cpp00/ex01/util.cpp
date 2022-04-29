#include <iomanip>
#include <iostream>

#include "phonebook.hpp"

const std::string kFieldName[] = {
  "Index",
  "First Name",
  "Last Name",
  "Nick Name",
  "Phone Number",
  "Darkest Secret"
};

const std::string &GetFieldName(std::size_t type) {
  return (kFieldName[type + 1]);
}

void  PrintSeperator(void) {
  char  prev_fill = std::cout.fill('-');

  for (std::size_t i = 0; i + 1 < kFieldNum; ++i) {
    std::cout << std::setw(kFieldWidth + 1) << "";
  }
  std::cout << std::setw(kFieldWidth + 2) << "" << std::endl;
  std::cout.fill(prev_fill);
}

static void PrintSingleField(const std::string &str) {
  std::size_t len = str.length();

  std::cout << "|";

  if (len < kFieldWidth) {
    for (std::size_t i = 0; i < kFieldWidth - len; ++i) {
      std::cout << ' ';
    }
  }

  size_t i = 0;
  while (str[i] && (i + 1 < kFieldWidth)) {
    std::cout << str[i++];
  }

  if (len > kFieldWidth)
    std::cout << ".";
  else if (len == kFieldWidth)
    std::cout << str[i];
}

static void  PrintFieldName(std::size_t start) {
  for (std::size_t i = start; i < start + kFieldNum; ++i) {
    PrintSingleField(kFieldName[i]);
  }
  std::cout << "|" << std::endl;
}

void  PrintFieldValue(const Contact &user) {
  PrintSingleField(std::to_string(user.GetIndex()));
  for (std::size_t i = kFirstName; i + 1 < kFieldNum; ++i) { 
    PrintSingleField(user.GetData(static_cast<DataType>(i)));
  }
  std::cout << "|" << std::endl;
  PrintSeperator();
}

void  PrintSearchedValue(const Contact &user) {
  for (std::size_t i = kFirstName; i < kFieldNum; ++i) {
    PrintSingleField(user.GetData(static_cast<DataType>(i)));
  }
  std::cout << "|" << std::endl;
  PrintSeperator();
}

void  PrintTableHead(void) {
  PrintSeperator();
  PrintFieldName(0);
  PrintSeperator();
}

void  PrintSearchTableHead(void) {
  PrintSeperator();
  PrintFieldName(1);
  PrintSeperator();
}

void  PrintTable(const PhoneBook &phonebook) {
  PrintTableHead();
  for (std::size_t i = 0; i < phonebook.GetUserCnt(); ++i) {
    PrintFieldValue(phonebook.GetUser(i));
  }
}

void  ClearEof(void) {
  std::cout << "  ";
  std::cin.clear();
  std::clearerr(stdin);
  std::cout << "\n";
}

bool  IsValidInput(const std::string input[kDataNum], DataType type) {
  switch (type) {
    case kFirstName:
      return (input[type].length());

    case kLastName:
      return (input[type].length());

    case kPhoneNumber:
      return (input[type].length());

    default:
      return (1);
  }
}
