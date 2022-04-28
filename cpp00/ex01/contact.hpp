/**
 * @file contact.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

enum DataType {
  kFirstName = 0,
  kLastName,
  kNickName,
  kPhoneNumber,
  kDarkestSecret,
  kDataNum
};

class Contact {
private:
  std::size_t index_;
  std::string data_[kDataNum];

public:
  Contact();
  Contact(std::size_t index, const std::string (&input)[kDataNum]);
  std::size_t GetIndex(void) const;
  const std::string &GetData(DataType type) const;
};

#endif
