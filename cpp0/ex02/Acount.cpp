/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 20:13:50 by vitor             #+#    #+#             */
/*   Updated: 2025/12/26 13:48:17 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << ' ';
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';' << "created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << ' ';
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';' << "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit ) {
	_nbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << ' ';
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount - deposit << ';';
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	bool isValid = true;

	if (withdrawal < 0 || withdrawal > _amount)
		isValid = false;
	_displayTimestamp();
	std::cout << ' ';
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	if (isValid == false)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << ' ';
	std::cout << "accounts:" << _nbAccounts << ';';
	std::cout << "total:" << _totalAmount << ';';
	std::cout << "deposits:" << _totalNbDeposits << ';';
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << ' ';
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t	now;
	tm*		localTime;
	
	now = time(NULL);
	std::cout << '[';
	localTime = localtime(&now);
	std::cout << localTime->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_mday;
	std::cout << '_';
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_sec;
	std::cout << ']';
}