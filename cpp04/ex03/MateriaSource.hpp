/**
 * @file MateriaSource.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 private:
  enum { kMaxMateria = 4 };
  AMateria* materias_[kMaxMateria];

 public:
  MateriaSource();
  MateriaSource(const MateriaSource& origin);
  MateriaSource& operator=(const MateriaSource& rhs);
  ~MateriaSource();

  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const& type);
};

#endif
