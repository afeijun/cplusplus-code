//内联函数  using an inline function
#include <iostream>

//an inline function definition
inline double square(double x) { return x*x;}
using namespace std;

int main(void)
{
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << ", b = " << b << endl;
        cout << "c = " << c;
	cout << ", c squared = " << square(c++) << endl;
	cout << "Now c = " << c << endl;	
	return 0;
}
