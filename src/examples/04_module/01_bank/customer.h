//customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <vector>
#include <iostream>
#include"savings_account.h"
#include"checking_account.h"
#include<memory>

class Customer
{
public:
	Customer(std::vector<std::unique_ptr<BankAccount>>& acts) : accounts{std::move(acts)}
	{

	}
	friend std::ostream& operator<<(std::ostream& out, const Customer& c);
private:
	std::vector<std::unique_ptr<BankAccount>> accounts;
};
#endif // !CUSTOMER_H
