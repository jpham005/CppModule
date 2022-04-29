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
#include <sstream>

#include "system_message.hpp"
#include "phonebook.hpp"
#include "util.hpp"

static void AddUserToPhoneBook(PhoneBook &phonebook) {
  std::string input[kDataNum];
  std::size_t i = kFirstName;
  std::size_t try_cnt = 0;

  while (i < kDataNum) {
    if (try_cnt == kMaxTryInputCount) {
      std::cerr << kInvalidInputError << std::endl;
      return;
    }

    std::cout << std::setiosflags(std::ios_base::left) << std::setw(14)
              << GetFieldName(i) << " : ";
    std::getline(std::cin, input[i]);

    ++try_cnt;

    if (IsValidInput(input, static_cast<DataType>(i))) {
      ++i;
      try_cnt = 0;
    }

    if (std::cin.eof()) ClearEof();
  }

  phonebook.AddUser(Contact(phonebook.GetLast(), input));
}

static void SearchPhoneBook(PhoneBook &phonebook) {
  PrintTable(phonebook);

  std::cerr << kSearchIndexMenu;

  std::string input;
  std::getline(std::cin, input);
  std::stringstream stream;
  stream.str(input);

  std::size_t index;
  stream >> index;

  if (stream.fail() || !stream.eof() || index < 0 
    || index >= phonebook.GetUserCnt()) {
    std::cerr << kSearchIndexError << std::endl;
    return;
  }

  PrintSearchTableHead();
  PrintSearchedValue(phonebook.GetUser(index));
}

static void  ExecuteInput(PhoneBook &phonebook, std::string input) {
  if (input == "ADD") {
    AddUserToPhoneBook(phonebook);
    phonebook.SetTryCnt(0);
  } else if (input == "SEARCH") {
    SearchPhoneBook(phonebook);
    phonebook.SetTryCnt(0);
  } else if (input == "EXIT") {
    std::cerr << kClosingMessage << std::endl;
    exit(EXIT_SUCCESS);
  } else if (std::cin.eof()) {
    std::cerr << "EXIT" << std::endl << kClosingMessage << std::endl;
    exit(EXIT_SUCCESS);
  } else if (input == "") {
    phonebook.SetTryCnt(0);
  }
  else phonebook.IncreaseTryCnt();
}

int main(void) {
  if (kFieldWidth <= 0 || kFieldNum <= 0) {
    std::cerr << kFieldValueError << std::endl;
    return (1);
  }

  PhoneBook   phonebook;
  std::string input;

  std::cerr << kOpeningMessage << std::endl;

  while (true) {
    if (phonebook.GetTryCnt() == kMaxTryInputCount) {
      std::cerr << kInvalidInputError << std::endl;
      return (EXIT_FAILURE);
    }

    std::cerr << kPhoneBookMenu << std::endl << "Input : ";
    std::getline(std::cin, input);

    ExecuteInput(phonebook, input);
  }
}
