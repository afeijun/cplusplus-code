//functions with array objects
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char *Snames[] = {"Spring", "Summer", "Fall", "Winter"};
//function to modify array object
void fill(double arr[], int size);
//function that uses array object without modifying it
void show(const double arr[], int size);

int main(void)
{
	double expenses[Seasons];
	fill(expenses, Seasons);
	show(expenses, Seasons);
	return 0;
}

void fill(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> arr[i];
	}
}

void show(const double arr[], int size)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}


