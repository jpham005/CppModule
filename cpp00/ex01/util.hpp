/**
 * @file util.hpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */
#pragma once
#include <iomanip>
#include <iostream>

#include "phonebook.hpp"

const std::string &GetFieldName(std::size_t type);
void              PrintSeperator(void);
void              PrintFieldValue(const Contact &user);
void              PrintSearchedValue(const Contact &user);
void              PrintTableHead(void);
void              PrintSearchTableHead(void);
void              PrintTable(const PhoneBook &phonebook);
void              ClearEof(void);
bool              IsValidInput(const std::string input[kDataNum], DataType type);
