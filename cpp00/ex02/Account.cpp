#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

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
	cout << "[";
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == ':')
			continue;
		cout << buf[i];
	}
	cout << "] ";
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
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << checkAmount() << ";created" << endl;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	cout << "index:" << _accountIndex;
	cout << ";amount:" << checkAmount() << ";closed";
	if (Account::_nbAccounts != 0)
		cout << endl;
}

void Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	cout << "accounts:" << _nbAccounts;
	cout << ";total:" << _totalAmount;
	cout << ";deposits:" << getNbDeposits();
	cout << ";withdrawals:" << getNbWithdrawals() << endl;
}

void Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";deposits:" << _nbDeposits;
	cout << ";withdrawals:" << _nbWithdrawals << endl;
}

void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";p_amount:" << checkAmount();
	cout << ";deposit:" << deposit;
	
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;

	cout << ";amount:" << checkAmount();
	cout << ";nb_deposits:" << _nbDeposits << endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";p_amount:" << checkAmount();
	cout << ";withdrawal:";
	
	if (this->checkAmount() - withdrawal < 0) {
		cout << "refused" << endl;
		return (false);
	}
	else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		
		cout << withdrawal;
		cout << ";amount:" << checkAmount();
		cout << ";nb_withdrawals:" << _nbWithdrawals << endl;
		return (true);
	}
}
