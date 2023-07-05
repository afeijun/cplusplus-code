//regular and reference arguments
//计算参数的立方
#include <iostream>
using namespace std;
double cube(double a);
double refcube(double &ra);
int main(void)
{
	double x = 3.0;
	cout << cube(x);
	cout << " = cube of " << x << endl;
        cout << refcube(x);
	cout << " = cube of " << x << endl;

	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(double &ra)
{
	ra *= ra * ra;
	return ra;
}
