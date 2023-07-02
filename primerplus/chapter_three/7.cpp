
#include <iostream>
using namespace std;

int main(void)
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0/3.0;
	const float million = 1.0E6;

	cout << "tub = " << tub << endl;
	cout << "A million tubs = " << million*tub << endl;
	cout << "Ten million tubs = " << 10*million*tub << endl;

	double mint = 10.0/3.0;
	cout << "mint = " << mint << endl;
	cout << "A million mints = " << million*mint << endl;
	cout << "Ten million mints = " << 10*million*mint << endl;
	return 0;
}
