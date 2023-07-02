
#include <iostream>
using namespace std;

int main(void)
{
	double distance_in_miles,fuel_in_gallon;
	double distance_in_kilometer,fuel_in_litre;
	double fuel_consume;
	cout << "Enter the distance in miles: ";
	cin >> distance_in_miles;
	cout << "Enter the fuel consume in gallon: ";
	cin >> fuel_in_gallon;
	fuel_consume = distance_in_miles / fuel_in_gallon;
	cout << "The fuel consume is " << fuel_consume << " miles/gallon." << endl;
	cout << "Enter the distance in kilometer: ";
	cin >> distance_in_kilometer;
	cout << "Enter the fuel consume in litre: ";
	cin >> fuel_in_litre;
	fuel_consume = (fuel_in_litre / distance_in_kilometer) * 100;
	cout << "The fuel consume is " << fuel_consume << "L/100km." << endl;
	return 0;
}
