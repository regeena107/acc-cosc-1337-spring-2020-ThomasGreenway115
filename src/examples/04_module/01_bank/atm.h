//atm.h
#ifndef ATM_H
#define ATM_H
#include <vector>
#include <iostream>
#include"customer.h"
#include <memory>
class ATM
{
public:
	ATM(Customer& c): customer{std::move (c)}
	{

	}
	friend std::ostream& operator<<(std::ostream& out, const ATM& b);


private:
	Customer customer;

};

#endif // !ATM_H