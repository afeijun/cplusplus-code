#include "p2.h"
using namespace std;
int main(void)
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	one.FormalShow();
	
	cout << endl;
	two.Show();
	two.FormalShow();

	cout << endl;
	three.Show();
	three.FormalShow();

	return 0;
}
