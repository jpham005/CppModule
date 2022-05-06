/**
 * @file IMateriaSource.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#pragma once

#include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
