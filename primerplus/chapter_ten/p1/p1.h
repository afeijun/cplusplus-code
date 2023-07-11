#ifndef __P1_H
#define __P1_H

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
	private:
		string name;
		string accountnum;
		double balance;
	public:
		BankAccount(string client, string num, double bal = 0.0);
		void show(void) const;
		void deposit(double cash);
		void withdraw(double cash);
};




#endif
