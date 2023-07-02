
#include <iostream>
using namespace std;

const int DEGREE_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;

int main(void)
{
	double degrees,degree,minute,second;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	degrees = degree + (second / MINUTE_TO_SECOND +minute) /DEGREE_TO_MINUTE; 
	cout << degree << " degrees, " << minute << "mintues, " << second << " seconds = " << degrees << " degrees"<< endl; 
	return 0;
}
