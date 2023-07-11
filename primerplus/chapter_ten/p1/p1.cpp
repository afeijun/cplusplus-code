#include "p1.h"

BankAccount::BankAccount(string client, string num, double bal)
{
	name = client;
	accountnum = num;
	balance = bal;
}

void BankAccount::show(void) const
{
	cout << "The Account information: " << endl;
	cout << "Name: " << name << endl;
	cout << "Account: " << accountnum << endl;
	cout << "Balance: " << balance << endl;
}

void BankAccount::deposit(double cash)
{
	balance += cash;
}

void BankAccount::withdraw(double cash)
{
	balance -= cash;
}
