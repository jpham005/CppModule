/**
 * @file contact.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */
#include <iostream>

#include "contact.hpp"

Contact::Contact() {
  this->index_ = static_cast<std::size_t>(-1);
}

Contact::Contact(std::size_t index, const std::string (&input)[kDataNum]) {
  if (index == 8)
    this->index_ = 0;
  else
    this->index_ = index;
  for (int i = 0; i < kDataNum; ++i) {
    this->data_[i] = input[i];
  }
}

std::size_t Contact::GetIndex(void) const {
  return (this->index_);
}

const std::string &Contact::GetData(DataType type) const {
  return (this->data_[type]);
}
