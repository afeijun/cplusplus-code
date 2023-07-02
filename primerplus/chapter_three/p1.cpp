
#include <iostream>
using namespace std;

int main(void)
{
	const int FOOT_TO_INCH = 12;
	int height;
	cout << "Please enter your height int inches_";
	cin >> height;
	cout << "Your height convert to " << height/FOOT_TO_INCH
	     << " food and " << height % FOOT_TO_INCH << " inches height."
	     << endl;
	return 0;
}
