// using the Vector class
#include <iostream>
#include <cstdlib>     // rand(), srand() prototypes
#include <ctime>       // time() prototypes
#include <fstream>
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
	ofstream fout;
	fout.open("thewalk.txt");
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		while (result.magval() < target)
		{
			fout << steps << ": ";
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fout << result << endl;
		}
		cout << "After " << steps << " steps, the subject has the following location:\n";
		fout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result << endl;
		fout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = " << result.magval() / steps << endl;
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	fout.close();
	return 0;
}
