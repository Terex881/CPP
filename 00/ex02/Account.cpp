/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:11 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/15 14:45:39 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {
	return _nbAccounts;
}

int Account::getNbDeposits() {
	return _totalNbDeposits;
}

int Account::getTotalAmount() {
	return _totalAmount;
}

int Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp() {
	std::time_t now = std::time(nullptr);
	std::tm* now_tm = std::localtime(&now);
	char time_str[16];
	std::strftime(time_str, sizeof(time_str), "%Y%m%d_%H%M%S", now_tm);
	std::cout << "[" << time_str << "] ";
}

Account::Account(int initial_deposit ) {

	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(){

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount << ";closed" << std::endl;
}

int Account::checkAmount() const {
	return _amount;
}

bool Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if(withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	std::cout << withdrawal << ";amount:"
	<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

void Account::makeDeposit(int deposit) {

	_displayTimestamp();
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;

	std::cout << "index:" << _accountIndex <<";p_amount:" << _amount << ";deposit:"
		<< deposit ;
	_amount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

void Account::displayAccountsInfos() {

	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount <<
	";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals <<
	std::endl;
}

void Account::displayStatus () const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" <<
	_nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
