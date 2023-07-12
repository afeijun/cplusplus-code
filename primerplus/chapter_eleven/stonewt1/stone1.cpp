// user-defined conversion functions
#include <iostream>
using std::cout;
#include "stonewt1.h"
int main()
{
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int => ";
	cout << "Poppins: " << int (poppins) << " pounds.\n";
	return 0;
}

