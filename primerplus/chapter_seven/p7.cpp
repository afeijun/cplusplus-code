//array functions and const
#include <iostream>
const int Max = 5;
using namespace std;

double *fill_array(double *begin, double *end);
void show_array(double *begin, double *end);
void revalue(double r, double *begin, double *end);

int main(void)
{
	double properties[Max];
	double *pa = fill_array(properties, properties + Max);
	show_array(properties, pa);
	if (pa-properties > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))  // bad input
		{
			cin.clear();
			while(cin.get() != '\n');
			cout << "Bad input, please enter a number: ";
		}
		revalue(factor, properties, pa);
		show_array(properties, pa);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double *fill_array(double *begin,double *end)
{
	double temp;
	double *pt;
	for (pt = begin; pt != end; pt++)
	{
		cout << "Enter value #" << pt-begin + 1 << ": ";
		cin >> temp;
		if (!cin)   //bad input
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)  // signal to terminate
			break;
		*pt = temp; 
	}
	return pt;
}
//the following function can use, but not alter
void show_array(double *begin, double *end)
{
	for (double *pt = begin; pt != end; pt++)
	{
		cout << "Property #" << pt-begin + 1 << ": $";
		cout << *pt << endl;
	}
}
//multiplies each element of p[] by r
void revalue(double r, double *begin, double *end)
{
	for (double *pt = begin; pt != end; pt++)
	{
		*pt *= r;
	}
}






