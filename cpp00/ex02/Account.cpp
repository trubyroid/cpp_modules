#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

void	Account::_displayTimestamp(void) {
	time_t		now = time(0);
    struct tm	tstruct;
    char		buf[80];

    tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%X", &tstruct);
	std::cout << "[";
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == ':')
			continue;
		std::cout << buf[i];
	}
	std::cout << "] ";
}


int		Account::checkAmount(void) const{
	return (this->_amount);
}

int		Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
}

Account::Account ( int initial_deposit ) {
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;

	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";created" << std::endl;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << checkAmount() << ";closed";
	if (Account::_nbAccounts != 0)
		std::cout << std::endl;
}

void Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << checkAmount();
	std::cout << ";deposit:" << deposit;
	
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;

	std::cout << ";amount:" << checkAmount();
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << checkAmount();
	std::cout << ";withdrawal:";
	
	if (this->checkAmount() - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		
		std::cout << withdrawal;
		std::cout << ";amount:" << checkAmount();
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}
