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
#include "phonebook.hpp"
#include <iomanip>
#include <iostream>

const std::string &GetFieldName(std::size_t type);
void              PrintSeperator(void);
void              PrintFieldName(void);
void              PrintFieldValue(const Contact &user);
