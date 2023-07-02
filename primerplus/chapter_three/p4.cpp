
#include <iostream>
using namespace std;

const int DAY_HOUR = 24;
const int HOUR_MINUTE = 60;
const int MINUTE_SECOND = 60;


int main(void)
{
	long long seconds,second;
	int days,hours,minutes;
	cout << "Please enter the number of seconds:";
	cin >> seconds;
	second = seconds;
	days = seconds / (DAY_HOUR*HOUR_MINUTE*MINUTE_SECOND);
	seconds = seconds % (DAY_HOUR*HOUR_MINUTE*MINUTE_SECOND);
	hours = seconds / (HOUR_MINUTE*MINUTE_SECOND);
	seconds = seconds % (HOUR_MINUTE*MINUTE_SECOND);
	minutes = seconds / MINUTE_SECOND;
	seconds = seconds % MINUTE_SECOND;
	cout << second << " seconds = " << days << " days," << hours << " hour," << minutes << " minutes," << seconds << " seconds." << endl;
	return 0;
}
