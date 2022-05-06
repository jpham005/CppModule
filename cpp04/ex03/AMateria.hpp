/**
 * @file AMateria.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#pragma once

#include "ICharacter.hpp"

class AMateria {
 private:
  AMateria();
  AMateria(const AMateria& copy);
  AMateria& operator=(const AMateria& rhs);

 protected:
  std::string type_;
  bool is_empty_;

 public:
  AMateria(std::string const& type);
  virtual ~AMateria();

  std::string const& getType() const;
  bool GetIsEmpty() const;
  void SetIsEmpty(bool value);

  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
};

#endif
