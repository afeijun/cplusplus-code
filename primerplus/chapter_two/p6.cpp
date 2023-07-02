
#include <iostream>
using namespace std;
double convert(double c);

int main(void)
{
	double years,ast;
	cout << "Enter the number of light years:";
	cin >> years;
	ast = convert(years);
	cout << years << " light years = "<< ast << " astronomical units." << endl;
	return 0;
}

double convert(double c)
{
	return 63240*c;
}


