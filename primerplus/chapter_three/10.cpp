
#include<iostream>
using namespace std;

int main(void)
{
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout << "Integer division: 9/5 = " << 9/5 << endl;
	cout << "Float division: 9.0/5.0 = " << 9.0/5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
	cout << "Double division: 1e7/9.0 = " << 1e7/9.0 << endl;
	cout << "Float constance: 1e7f/9.0f = " << 1e7f/9.0f << endl;
	return 0;
}
