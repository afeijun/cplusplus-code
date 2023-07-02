
#include <iostream>
using namespace std;

int main(void)
{
	double number,sum = 0.0;
	cout << "Calculate five number sum and average." << endl;
	cout << "Please enter five values:" << endl;
	
	for (int i = 0; i<5; i++)
	{
		cout << "Value " << (i+1) << ": ";
		cin >> number;
		sum += number;
	}
	cout << "The sum = " << sum << endl;
	cout << "Average = " << sum / 5 << endl;
	return 0;
}
