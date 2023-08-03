// using exception classes
#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z, g;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try{
			z = hmean(x, y);
			g = gmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y << " is " << g << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}
		catch (bad_hmean & bg)
		{
			cout << bg.what();
			bg.show();
			cout << "Sorry, you don't get to play any more.\n";
			break;
		}
		catch (bad_gmean & hg)
		{
			cout << hg.what();
			hg.show();
			cout << "Sorry, you don't get to play any more.\n";
			break;
		}
	}
	cout << "Bye!\n";
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}
