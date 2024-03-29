// returning an error code
#include <iostream>
#include <cfloat>  // or float.h for DBL_MAX
double hmean(double a, double b, double * ans);

int main(void)
{
	double x, y, z;
	std::cout << "Enter two number: ";
	while (std::cin >> x >> y)
	{
		if (hmean(x, y, &z))
			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
		else
			std::cout << "one value should not be the negative of the other - try again.\n";
		std::cout << "Enter next set of numbers <q to quit>: ";
	}
	std::cout << "Bye!\n";
	return 0;
}

double hmean(double a, double b, double * ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a * b / (a + b);
		return true;
	}
}
