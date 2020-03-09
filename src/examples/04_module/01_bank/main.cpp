#include "checking_account.h"
#include<vector>
using std::cout; using std::vector; using std::cin;

int main()
{	
	CheckingAccount c;

	CheckingAccount a(50), b(10);
	//BankAccount c = a + b;
	display_balance(a);
	cin >> a;
	cout << a;
	
	vector<CheckingAccount> accounts{ CheckingAccount(100), CheckingAccount(200), CheckingAccount(300) };
	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}
	
	
	
	CheckingAccount account(500);
	int balance = account.get_balance();
	cout << "Balance: " << balance;
	try
	{
		account.deposit(-10);
	}
	catch (InvalidAmount e)
	{
		cout << e.get_message();
	}
	return 0;
}