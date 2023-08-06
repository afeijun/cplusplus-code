// using the Queue interface
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>

#include "customer.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);  // is there a new customer?

int main(void)
{
	using namespace std;
	std::srand(std::time(0));  // random initializing of rand()
	
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	queue<Item> line;

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours;

	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;     // new customer data
	long turnaways = 0;       // turned away by full queue
	long customers = 0;       // joined the queue
	long served = 0;          // served during the simulation
	long sum_line = 0;        // cumulative line length
	int wait_time = 0;        // time until autoteller is free
	long line_wait = 0;       // cumulative time in line
	
	// running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust)) // have newcustomer
		{
			if (line.size() == qs)
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.push(temp);
			}
		}
		if (wait_time <= 0 && !line.empty())
		{
			temp = line.front();
			line.pop();
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.size();
	}
	
	// reporting result
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double) sum_line / cyclelimit << endl;
		cout << " average wait time: " << (double) line_wait / served << " minutes\n";
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

