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
	Queue line(qs);

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours;
	Item temp;     // new customer data
	long turnaways;       // turned away by full queue
	long customers;       // joined the queue
	long served;          // served during the simulation
	long sum_line;        // cumulative line length
	int wait_time;        // time until autoteller is free
	long line_wait;       // cumulative time in line
		
	double min_per_cust;
	double perhour = 1.0;
	double average_time = 0;
	for (perhour = 1.0; average_time < 1.0; perhour++)
	{
		min_per_cust = MIN_PER_HR / perhour;
		
		served = 0;          // served during the simulation
		line_wait = 0;       // cumulative time in line

		// running the simulation
		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust)) // have newcustomer
			{
				if (line.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);
					line.enqueue(temp);
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}
		average_time = (double)line_wait/served;
	}

	
	// reporting result
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "average queue size: ";
		cout << "perhour = " << perhour << ", average wait time = 1 minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}

