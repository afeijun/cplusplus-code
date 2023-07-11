#include "golf.h"

int main(void)
{
	golf p1("Rick", 100);
	golf p2;
	
	cout << endl;
	cout << "Now show two person: " << endl;
	p1.showgolf();
	p2.showgolf();

	return 0;
}
