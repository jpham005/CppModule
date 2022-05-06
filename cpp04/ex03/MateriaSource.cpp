/**
 * @author jaham (jaham@student.42seoul.kr)
 * @file MateriaSouce.cpp
 * @brief
 * @version 0.1
 * @date 2022-05-06
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include "MateriaSource.hpp"

#include <iostream>
#include <cstring>

MateriaSource::MateriaSource() {
  memset(this->materias_, 0, sizeof(this->materias_));
}

MateriaSource::MateriaSource(const MateriaSource& origin) {
  *this = origin;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
  AMateria* temp[kMaxMateria];
  for (std::size_t i = 0; i < kMaxMateria; ++i) {
    temp[i] = NULL;

    if (rhs.materias_[i])
      temp[i] = rhs.materias_[i]->clone();
  }

  for (std::size_t i = 0; i < kMaxMateria; ++i) {
    if (this->materias_[i])
      delete this->materias_[i];
    this->materias_[i] = NULL;

    if (temp[i])
      this->materias_[i] = temp[i]->clone();
  }

  for (std::size_t i = 0; i < kMaxMateria; ++i) {
    if (temp[i])
      delete temp[i];
  }

  return (*this);
}

MateriaSource::~MateriaSource() {
  for (std::size_t i = 0; i < kMaxMateria; ++i) {
    if (this->materias_[i])
      delete this->materias_[i];
  }
}

void MateriaSource::learnMateria(AMateria* m) {
  std::size_t i = 0;
  while ((i < kMaxMateria) && this->materias_[i])
    ++i;

  if (i == kMaxMateria) {
    std::cout  << "brain full" << std::endl;
    return;
  }

  this->materias_[i] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  std::size_t i = 0;
  while ((i < kMaxMateria) && (this->materias_[i]->getType() != type))
    ++i;

  if (i == kMaxMateria) {
    std::cout << "no match found" << std::endl;
    return 0;
  }

  return (this->materias_[i]->clone());
}
