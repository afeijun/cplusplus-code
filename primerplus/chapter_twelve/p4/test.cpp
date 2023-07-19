#include <iostream>
using namespace std;
typedef unsigned long Item;

int main(void)
{
	Item * p;
	p = new Item[3];
	cout << p << endl;
	cout << (int) *(p-1) << endl;
}
