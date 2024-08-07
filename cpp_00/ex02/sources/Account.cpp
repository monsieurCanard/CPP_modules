/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:51:06 by anthony           #+#    #+#             */
/*   Updated: 2024/07/18 15:27:22 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/// @brief Initialize the static variables
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
:	_accountIndex(_nbAccounts), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0) {

	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";" 
				<< "amount:" << _amount << ";"
				<< "created" 
				<< std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";" 
				<< "amount:" << _amount << ";"
				<< "closed"
				<< std::endl;
}

int	Account::getNbAccounts() {
	return _nbAccounts;
}

int	Account::getTotalAmount() {
	return _totalAmount;
}

int	Account::getNbDeposits() {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";" 
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";";
	
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	
	_nbDeposits++;
	std::cout	<< "nb_deposits:" << _nbDeposits
				<< std::endl;
	
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout	<< "index:" 
				<< _accountIndex << ";" 
				<< "p_amount:" << _amount 
				<< ";" << "withdrawal:";

	if (_amount - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";

	_nbWithdrawals++;
	_amount -= withdrawal;
	std::cout 	<< "amount:" << _amount << ";" 
				<< "nb_withdrawals:" << _nbWithdrawals 
				<< std::endl;

	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount() const {
	return _amount;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";" 
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";" 
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp() {
	
	std::time_t time = std::time(0);
	std::tm *local_time = std::localtime(&time);

	char format_time[20];

	std::strftime(format_time, sizeof(format_time), "[%Y%m%d_%H%M%S]", local_time);
	std::cout <<  format_time << " ";
}