#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
/**
 * @file phonebook.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "contact.hpp"

enum {
  kFieldWidth = 10,
  kFieldNum = 4,
  kMaxUserCount = 8
};

class PhoneBook {
private:
  Contact     users_[kMaxUserCount];
  std::size_t last_;

public:
  PhoneBook();

  void              AddUser(const Contact &user);
  void              SearchUser(std::size_t index);
  const Contact     &GetUser(std::size_t index) const;
  std::size_t       GetLast(void) const;
};

#endif
