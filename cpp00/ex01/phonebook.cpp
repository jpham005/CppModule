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
  this->last_ = 0;
  this->user_cnt_ = 0;
  this->try_cnt_ = 0;
}

const Contact &PhoneBook::GetUser(std::size_t index) const {
  return (this->users_[index]);
}

std::size_t PhoneBook::GetLast(void) const {
  return (this->last_);
}

std::size_t PhoneBook::GetUserCnt(void) const {
  return (this->user_cnt_);
}

void  PhoneBook::IncreaseUserCnt(void) {
  ++(this->user_cnt_);
}

void PhoneBook::SetUserCnt(std::size_t input) {
  this->user_cnt_ = input;
}

std::size_t PhoneBook::GetTryCnt(void) const {
  return (this->try_cnt_);
}

void  PhoneBook::IncreaseTryCnt(void) {
  ++(this->try_cnt_);
}

void PhoneBook::SetTryCnt(std::size_t input) {
  this->try_cnt_ = input;
}

void  PhoneBook::AddUser(const Contact &user) {
  if (this->last_ == 8)
    this->last_ = 0;
  this->users_[(this->last_)++] = user;
  
  if (this->user_cnt_ < 8)
    ++(this->user_cnt_);
}
