#include <iostream>
#include "p4.h"

using namespace std;

int main(void)
{
	using namespace SALES;
	double ar[4] = {11.1, 22.2, 33.3, 44.4};
	Sales sl;

	setSales(sl, ar, 3);
	showSales(sl);
	setSales(sl);
	showSales(sl);
	return 0;
}
