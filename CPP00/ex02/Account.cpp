/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:35:16 by malavaud          #+#    #+#             */
/*   Updated: 2026/06/24 16:26:03 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts; /*nbaccount = 0 alors index = 0;*/
	_amount = initial_deposit; /*account (a) = 42 alors amount = 40$*/
	_nbDeposits = 0;/*au moment de la creation*/
	_nbWithdrawals = 0;	/*au moment de la creation*/
	_nbAccounts++;
	_totalAmount += initial_deposit;/*ajout $*/
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) /*afficher les closed*/
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::makeDeposit(int deposit) /*mise a jour des compteur $ du compte*/
{
    int p_amount = _amount;

    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit
			  << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) /*retrait & du compte */
{
    int p_amount = _amount;

    if (_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
	
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _displayTimestamp();
	
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << p_amount
              << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;
	return (true);
}

int Account::checkAmount(void) const /*solde du compte*/
{
    return (_amount);
}

void Account::displayStatus(void) const /*l'etat dun compte*/
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::displayAccountsInfos(void) 
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t now = time(NULL);
    tm *current = localtime(&now);

    std::cout << "["
              << current->tm_year + 1900
              << std::setw(2) << std::setfill('0') << current->tm_mon + 1
              << std::setw(2) << std::setfill('0') << current->tm_mday
              << "_"
              << std::setw(2) << std::setfill('0') << current->tm_hour
              << std::setw(2) << std::setfill('0') << current->tm_min
              << std::setw(2) << std::setfill('0') << current->tm_sec
              << "] ";
}
