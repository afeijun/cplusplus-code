// using the Vector class
#include <iostream>
#include <cstdlib>     // rand(), srand() prototypes
#include <ctime>       // time() prototypes
#include "vector.h"

int main(void)
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));       // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit): ";
	cin >> target;
	cout << "Enter step length: ";
	cin >> dstep;
	int N;
	cout << "Please enter the number of test: ";
	cin >> N;
	cin.get();
	unsigned long max, min, sum = 0;
	for (int i = 0; i < N; i++)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		if (i == 0)
			max = min= steps;
		else if (max < steps)
			max = steps;
		else if (min > steps)
			min = steps;
		sum += steps;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	cout << "max = " << max << ", min = " << min << ", average = " << sum / N << endl;
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}
