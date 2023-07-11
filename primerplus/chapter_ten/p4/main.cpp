#include "p4.h"

using namespace SALES;

int main(void)
{
	double ar[4] = {11.1, 22.2, 33.3, 44.4};
	Sales s1(ar, 4);
	Sales s2;
	
	cout << endl;
	cout << "Now show two info: " << endl;
	s1.showSales();
	s2.showSales();
	
	return 0;
}
