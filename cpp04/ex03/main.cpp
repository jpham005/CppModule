/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-05-06
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {
  ICharacter* me = new Character("me");
  ICharacter* you = new Character("you");

  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  src->learnMateria(new Ice());
  src->learnMateria(new Ice());
  src->learnMateria(new Ice());

  AMateria* temp;

  temp = src->createMateria("ice");
  me->equip(temp);
  you->equip(temp);

  temp = src->createMateria("cure");
  me->equip(temp);
  me->equip(temp);
  me->equip(temp);
  you->equip(temp);
  you->equip(temp);
  you->equip(temp);

  ICharacter* bob = new Character("bob");

  me->use(0, *bob);
  me->use(1, *bob);

  me->unequip(0);
  me->use(0, *bob);
  me->use(5, *bob);
  me->use(-5, *bob);

  *(static_cast<Character *>(me)) = *(static_cast<Character *>(you));
  me->use(0, *bob);
  me->use(1, *bob);

  me->unequip(0);
  you->use(0, *bob);

  me->equip(temp);
  me->equip(temp);
  me->use(0, *bob);

  me->unequip(2);
  me->equip(temp);
  me->use(2, *bob);

  delete temp;
  delete bob;
  delete me;
  delete src;

  // IMateriaSource* src = new MateriaSource();
  // src->learnMateria(new Ice());
  // src->learnMateria(new Cure());

  // ICharacter* me = new Character("me");

  // AMateria* temp;
  // temp = src->createMateria("ice");
  // me->equip(temp);
  // temp = src->createMateria("cure");
  // me->equip(temp);

  // ICharacter* bob = new Character("bob");

  // me->use(0, *bob);
  // me->use(1, *bob);

  // delete bob;
  // delete me;
  // delete src;
  // delete temp;

  system("leaks Interface");

  return (0);
}
