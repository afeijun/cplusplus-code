#include <iostream>
using namespace std;
#include "classic.h"

void Bravo(const Cd & disk);
int main(void)
{
	Cd c1("Beatles", "capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonate in B flat, Fantasia in C", "Alfred Brendel", "philips", 2, 57.17);
	Cd * pcd = &c1;
	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();

	cout << endl;
	cout << "using type cd * pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << endl;
	cout << "calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << endl;
	cout << "Testing assignment: \n";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd & disk)
{
	disk.Report();
}
