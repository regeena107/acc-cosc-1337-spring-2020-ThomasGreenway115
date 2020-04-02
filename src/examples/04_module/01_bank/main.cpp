#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include <functional>;
#include <memory>
using std::cout; using std::vector; using std::cin;
using std::reference_wrapper;
using std::unique_ptr;
using std::make_unique;
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
	
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(100);
	unique_ptr<BankAccount> r = make_unique<CheckingAccount>(100);

	vector<unique_ptr<BankAccount>> acts;//{std::move(s), std::move(c) };
	acts.push_back(std::move(s));
	acts.push_back(std::move(r));

	for (auto &account : acts)
	{
		cout << account->get_balance() << "\n";
	}
	
	return 0;
}