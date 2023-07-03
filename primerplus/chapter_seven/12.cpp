//functions with array objects
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
//function to modify array object
void fill(array<double, Seasons> * pa);
//function that uses array object without modifying it
void show(array<double, Seasons> da);

int main(void)
{
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(array<double, Seasons> * pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}

void show(array<double, Seasons> da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}


