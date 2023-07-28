#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queuetp.h"

const int SIZE = 5;
int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	Queue<Worker *> worker;
	Worker * lolas[SIZE];
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"
		     <<	"w: waiter  s: singer  "
		     << "t: singing waiter  q: quit\n";
		cin >> choice;
		while(strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t, or q: ";
			cin >> choice;
		}	
		if (choice == 'q')
			break;
		switch(choice)
		{
			case 'w' : lolas[ct] = new Waiter;
				   break;
			case 's' : lolas[ct] = new Singer;
				   break;
			case 't' : lolas[ct] = new SingingWaiter;
				   break;
		}
		cin.get();
		lolas[ct]->Set();
	}
	int i;
	for (i = 0; i < ct; i++)
	{
		if (worker.isfull())
			break;
		worker.push(lolas[i]);
	}
	cout << "\nHere is your staff:\n";
	Worker * pt;
	for (i = 0; i< ct; i++)
	{
		if (worker.isempty())
			break;
		worker.pop(pt);
		pt->Show();
	}
	for (i = 0; i < ct; i++)
		delete lolas[i];
	cout << "Bye.\n";
	return 0;
}
