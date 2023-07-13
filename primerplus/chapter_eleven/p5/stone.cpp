// user-defined conversions
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
	Stonewt incognito = 275;
	Stonewt wolfe(285.7, IPD);
	Stonewt taft(21, 8, DPD);
	
	Stonewt st1 = 300;
	Stonewt st2 = 200;
	cout << "The celebrity weighted " << incognito;
	cout << "The detective weighted " << wolfe;
	cout << "The President weighted " << taft;
	cout << "st1: " << st1;
        cout << "st2: " << st2;	
	cout << "st1 + st2 = " << st1 + st2;
	cout << "st1 - st2 = " << st1 - st2;
	cout << "st1 * 2 = " << st1 * 2;
	cout << "2 * st2 = " << 2 * st2;
	return 0;
}
