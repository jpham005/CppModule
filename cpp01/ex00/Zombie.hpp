#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

/**
 * @file Zombie.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief
 * @version 0.1
 * @date 2022-04-30
 *
 * Copyright (c) jaham. All rights reserved
 *
 */

#include <string>

class Zombie {
 private:
  std::string name_;

 public:
  Zombie();
  Zombie(const std::string &name);
  ~Zombie();

  void    announce(void) const;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
