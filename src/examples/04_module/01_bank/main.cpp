#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include <functional>;
using std::cout; using std::vector; using std::cin;
using std::reference_wrapper;
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
	SavingsAccount s(100);
	CheckingAccount r(100);

	vector< reference_wrapper <BankAccount>> acts{s, r};
	for (auto account_ref : acts)
	{
		cout << account_ref.get().get_balance() << "\n";
	}
	
	return 0;
}