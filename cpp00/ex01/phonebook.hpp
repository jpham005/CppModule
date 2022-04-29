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
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

enum {
  kFieldWidth = 10,
  kFieldNum = 4,
  kMaxUserCount = 8,
  kMaxTryInputCount = 3
};

class PhoneBook {
private:
  Contact     users_[kMaxUserCount];
  std::size_t last_;
  std::size_t user_cnt_;
  std::size_t try_cnt_;

public:
  PhoneBook();

  void              AddUser(const Contact &user);
  const Contact     &GetUser(std::size_t index) const;
  std::size_t       GetLast(void) const;
  std::size_t       GetUserCnt(void) const;
  void              SetUserCnt(std::size_t);
  void              IncreaseUserCnt(void);
  std::size_t       GetTryCnt(void) const;
  void              SetTryCnt(std::size_t);
  void              IncreaseTryCnt(void);
};

#endif
