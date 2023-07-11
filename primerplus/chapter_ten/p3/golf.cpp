#include "golf.h"


golf::golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

golf::golf()
{
	cout << "The fullname is: ";
	cin.getline(fullname, Len);
	cout << "The handicap is: ";
	cin >> handicap;
	cin.get();
}

void golf::sethandicap(int hc)
{
	handicap = hc;
}

void golf::showgolf() const
{
	cout << "The fullname is: " << fullname << endl;
	cout << "The handicap is: " << handicap << endl;
}
