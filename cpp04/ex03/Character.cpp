/**
 * @file Character.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "Character.hpp"

#include <cstring>
#include <iostream>

Character::Character() : type_("no name") {
  memset(this->inven_, 0, sizeof(this->inven_));
}

Character::Character(const std::string& name) : type_(name) {
  for (std::size_t i = 0; i < kMaxInven; ++i) {
    this->inven_[i] = NULL;
  }
}

Character::Character(const Character& origin) {
  *this = origin;
}

Character& Character::operator=(const Character& rhs) {
  AMateria* temp[kMaxInven];
  for (std::size_t i = 0; i < kMaxInven; ++i) {
    temp[i] = NULL;

    if (rhs.inven_[i])
      temp[i] = rhs.inven_[i]->clone();
  }

  this->type_ = rhs.type_;

  for (std::size_t i = 0; i < kMaxInven; ++i) {
    if (this->inven_[i])
      delete this->inven_[i];
    this->inven_[i] = NULL;

    if (temp[i])
      this->inven_[i] = temp[i]->clone();
  }

  for (std::size_t i = 0; i < kMaxInven; ++i) {
    if (temp[i])
      delete temp[i];
  }

  return (*this);
}

Character::~Character() {
  for (std::size_t i = 0; i < kMaxInven; ++i) {
    if (this->inven_[i])
      delete this->inven_[i];
  }
}

std::string const& Character::getName() const {
  return (this->type_);
}

void Character::equip(AMateria* m) {
  std::size_t i = 0;
  while ((i < kMaxInven) && this->inven_[i] && !(this->inven_[i]->GetIsEmpty()))
    ++i;
  
  if (i == kMaxInven) {
    std::cout << "no slot" << std::endl;
    return;
  }

  if (this->inven_[i])
    delete this->inven_[i];
  this->inven_[i] = m->clone();

  std::cout << this->type_ << " equipped " << m->getType() << std::endl;
}

void Character::unequip(int idx) {
  if (idx < 0 || idx >= kMaxInven || !this->inven_[idx]
      || this->inven_[idx]->GetIsEmpty())
    std::cout << "unequip fail" << std::endl;

  this->inven_[idx]->SetIsEmpty(true);
  std::cout << "unequip success" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
  if (idx < 0 || idx >= kMaxInven || this->inven_[idx]->GetIsEmpty()) {
    std::cout << "is invalid slot" << std::endl;
    return;
  }

  std::cout << this->type_ << " ";
  this->inven_[idx]->use(target);
}
