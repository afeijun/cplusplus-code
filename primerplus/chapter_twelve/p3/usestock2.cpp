// using the Stock class
#include <iostream>
#include "stock20.h"

const int STKS = 4;
int main(void)
{
	Stock stocks[STKS] = 
	{
		Stock("Nanosmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("obeliks", 130, 3.25),
		Stock("Fleep", 60, 6.5)
	};
	std::cout << "Stock holdings:\n";
	int st;
	for (st = 0; st < STKS; st++)
		std::cout << stocks[st];
	const Stock * top = &stocks[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);
	std::cout << "\nMost valuable holding:\n";
	std::cout << *top;
	return 0;
}