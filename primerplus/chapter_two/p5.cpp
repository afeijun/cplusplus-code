
#include <iostream>
using namespace std;

double return_fah(double cel);

int main(void)
{
	double cel;
	cout << "Please enter a Celsius value:";
	cin >> cel;
	double fah;
	fah = return_fah(cel);
	cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit."<< endl;
	return 0;
}

double return_fah(double cel)
{
	return 1.8*cel+32.0;
}
