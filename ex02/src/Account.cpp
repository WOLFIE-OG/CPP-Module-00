/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:49:35 by otodd             #+#    #+#             */
/*   Updated: 2024/11/19 16:27:23 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalAmount= 0;

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "created" << '\n';
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += checkAmount();
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "created" << '\n';
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "closed" << '\n';
}

void	Account::_displayTimestamp()
{
	time_t now = time(0);
    struct tm* localTime = localtime(&now);
    std::cout
		<< '['
        << (localTime->tm_year + 1900)
        << (localTime->tm_mon + 1)
        << localTime->tm_mday
        << "_"
        << (localTime->tm_hour)
        << (localTime->tm_min)
        << (localTime->tm_sec)
        << "] ";
}

void	Account::makeDeposit(int deposit)
{
	int	pAmount = checkAmount();
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << pAmount << ';';
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "nb_deposits:" << this->_nbDeposits << '\n'; 
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	pAmount = checkAmount();
	if ((checkAmount() - withdrawal) < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ';';
		std::cout << "p_amount:" << pAmount << ';';
		std::cout << "withdrawal:refused" << '\n';
		return (false);
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << pAmount << ';';
	std::cout << "withdrawal:" << withdrawal << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << '\n'; 
	return (true);
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << '\n';
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << '\n';
}