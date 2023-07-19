// augmended version
#include <iostream>
#include "stock20.h"
#include <cstring>
// constructors (verbose versions)
Stock::Stock()  // default constructor
{
	std::cout << "Default constructor called\n";
	company = new char[8];
	strcpy(company, "No name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char co[], long n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = new char[strlen(co) + 1];
	strcpy(company, co);
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; " << company << " shares set to 0.\n";
		shares = 0;
	}
	else 
		shares = n;
	share_val = pr;
	set_tot();
}

// class destructor
Stock::~Stock()
{
	std::cout << "Bye, " << company <<"!\n";
	delete [] company;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
		std::cout << "Number of shares purchased can't be negative. Transaction is aborted.\n";
	else if (num > shares)
		cout << "You can't sell more than you have! Transaction is aborted.\n";
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

std::ostream & operator<<(std::ostream & os, const Stock & st)
{
	os << "Company: " << st.company << ", Shares: " << st.shares << std::endl;
	os << "Share Price: $" << st.share_val << ", Total Worth: $" << st.total_val << std::endl;
	return os;
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
