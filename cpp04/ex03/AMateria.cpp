/**
 * @file AMateria.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(std::string const& type) : type_(type), is_empty_(true) {}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const {
  return this->type_;
}

bool AMateria::GetIsEmpty() const {
  return this->is_empty_;
}

void AMateria::SetIsEmpty(bool value) {
  this->is_empty_ = value;
}

void AMateria::use(ICharacter& target) {
  std::cout << " can't use AMateria to " << target.getName() << std::endl;
}
