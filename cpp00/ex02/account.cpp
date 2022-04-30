/**
 * @file account.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <ctime>
#include <iomanip>
#include <iostream>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_desposit) {
  this->_amount = initial_desposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  this->_accountIndex = Account::getNbAccounts();

  ++(Account::_nbAccounts);
  Account::_totalAmount += initial_desposit;

  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";created" << std::endl;
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
            << ";deposit:" << deposit << ";";

  this->_amount += deposit;
  ++(this->_nbDeposits);

  Account::_totalAmount += deposit;
  ++(Account::_totalNbDeposits);

  std::cout << "amount:" << this->_amount
            << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
            << ";withdrawal:";

  if (this->_amount >= withdrawal) {
    this->_amount -= withdrawal;
    ++(this->_nbWithdrawals);

    Account::_totalAmount -= withdrawal;
    ++(Account::_totalNbWithdrawals);

    std::cout << withdrawal << ";amount:" << this->_amount
              << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

    return (true);
  }

  std::cout << "refused" << std::endl;

  return (false);
}

int Account::checkAmount(void) const {
  return (this->_amount);
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";deposits:" << this->_nbDeposits
            << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void) {
  return (_nbAccounts);
}

int Account::getTotalAmount(void) {
  return (_totalAmount);
}

int Account::getNbDeposits(void) {
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
  return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << Account::_nbAccounts << ";total:"
            << Account::_totalAmount << ";deposits:"
            << Account::_totalNbDeposits << ";withdrawals:"
            << Account::_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
  std::time_t curr = std::time(NULL);
  std::tm *tm = std::localtime(&curr);

  char prev = std::cout.fill('0');
  std::cout << "[" << tm->tm_year + 1900 << std::setw(2) << tm->tm_mon + 1
            << std::setw(2) << tm->tm_mday << "_" << std::setw(2) << tm->tm_hour
            << std::setw(2) << tm->tm_min << std::setw(2) << tm->tm_sec << "] ";
  std::cout.fill(prev);
}
