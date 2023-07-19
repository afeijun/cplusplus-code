// augmented version
#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

class Stock
{
	private:
		char * company;
		long shares;
		double share_val;
		double total_val;
		void set_tot() {total_val = shares * share_val;}
	public:
		// two constructors
		Stock();             // default constructor
		Stock(const char co[], long n = 0, double pr = 0.0);
		~Stock();            // noisy destructor
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		friend std::ostream & operator<<(std::ostream & os, const Stock & st);
		const Stock & topval(const Stock & s) const;
};




#endif
