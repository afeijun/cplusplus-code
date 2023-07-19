// using the Queue interface
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);  // is there a new customer?

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));  // random initializing of rand()
	
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line1(qs);
	Queue line2(qs);

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours;
	Item temp1;     // new customer data
	Item temp2;
	long turnaways;       // turned away by full queue
	long customers;       // joined the queue
	
	long served1;          // served during the simulation
	long sum_line;        // cumulative line length
	int wait_time1;        // time until autoteller is free
	long line_wait1;       // cumulative time in line
	long served2;
	long line_wait2;
	int wait_time2;

	double min_per_cust;
	double perhour;
	double average_time = 0;
	double average_time1 = 0,average_time2 = 0;
	for (perhour = 1.0; average_time < 1.0; perhour++)
	{
		min_per_cust = MIN_PER_HR / perhour;
		
		served1 = 0;          // served during the simulation
		line_wait1 = 0;       // cumulative time in line
		served2 = 0;
		line_wait2 = 0;
		wait_time1 = 0;
		wait_time2 = 0;
		average_time1 = 0;
	        average_time2 = 0;	
		// running the simulation
		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust)) // have newcustomer
			{
				if (line1.isfull()&&line2.isfull())
					turnaways++;
				else
				{
					customers++;
					if (line1 < line2)
					{
						temp1.set(cycle);
						line1.enqueue(temp1);
					}
					else
					{
						temp2.set(cycle);
						line2.enqueue(temp2);
					}
				}
			}
			if (wait_time1 <= 0 && !line1.isempty())
			{
				line1.dequeue(temp1);
				wait_time1 = temp1.ptime();
				line_wait1 += (cycle - temp1.when());
/*				cout << "cycle: " << cycle << endl;
				cout << "line_wait1: " << line_wait1 << endl;
				cout << "temp1.when(): " << temp1.when() << endl;
*/				served1++;
			}
			if (wait_time2 <= 0 && !line2.isempty())
			{
				line2.dequeue(temp2);
				wait_time2 = temp2.ptime();
				line_wait2 += (cycle - temp2.when());
				served2++;
			}
			if (wait_time1 > 0)
				wait_time1--;
			if (wait_time2 > 0)
				wait_time2--;
		}
		average_time1 = (double)line_wait1/served1;
		average_time2 = (double)line_wait2/served2;
		if (served1 == 0)
			average_time1 = 0;
		if (served2 == 0)
			average_time2 = 0;
		average_time = (average_time1 + average_time2)/2;
/*		cout << "average_time1: " << average_time1 << endl;
		cout << "served1: " << served1 << endl;
		cout << "line_wait1: " << line_wait1 << endl;	
		cout << "average_time2: " << average_time2 << endl;
		cout << "served2: " << served2 << endl;
		cout << "line_wait2: " << line_wait2 << endl;
		cout << "average_time: " << average_time << endl;
*/	}

	
	// reporting result
	cout << "perhour = " << perhour << ", average wait time = 1 minutes\n";
	cout << "Done!\n";
	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}

