//array functions and const
#include <iostream>
const int Max = 5;
using namespace std;

int fill_array(double p[], int n);
void show_array(const double p[], int n);
void revalue(double r, double p[], int n);

int main(void)
{
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))  // bad input
		{
			cin.clear();
			while(cin.get() != '\n');
			cout << "Bad input, please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

int fill_array(double p[],int n)
{
	double temp;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Enter value #" << i+1 << ": ";
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
		p[i] = temp; 
	}
	return i;
}
//the following function can use, but not alter
void show_array(const double p[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << i+1 << ": $";
		cout << p[i] << endl;
	}
}
//multiplies each element of p[] by r
void revalue(double r, double p[], int n)
{
	for (int i = 0; i < n; i++)
	{
		p[i] *= r;
	}
}






