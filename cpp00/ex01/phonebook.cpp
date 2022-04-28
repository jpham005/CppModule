/**
 * @file phonebook.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */
#include "phonebook.hpp"

PhoneBook::PhoneBook() {
/*  for (std::size_t i = 0; i < kMaxUserCount; ++i) {
    this->users_ = NULL;
  }
*/
  this->last_ = 0;
}

const Contact &PhoneBook::GetUser(std::size_t index) const {
  return (this->users_[index]);
}

std::size_t PhoneBook::GetLast(void) const {
  return (this->last_);
}

void  PhoneBook::AddUser(const Contact &user) {
  if (this->last_ == 8)
    this->last_ = 0;
  this->users_[(this->last_)++] = user;
}

void  PhoneBook::SearchUser(std::size_t index) {

}
