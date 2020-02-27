//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		//usually write to a file
		throw InvalidAmount("\nAmmount must be greater than 0.\n");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount <= 0)
	{
		throw InvalidAmount("\nAmmount must be greater than 0.\n");
	}
	else if (balance - amount < 0)
	{
		throw InvalidAmount("\n Insufficient funds to withdraw.\n");
	}
	else
	{
		balance -= amount;
	}
}