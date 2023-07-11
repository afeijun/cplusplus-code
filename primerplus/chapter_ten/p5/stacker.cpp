// testing the stack class
#include <iostream>
#include <cctype>

#include "stack.h"

int main(void)
{
	using namespace std;
	Stack st;
	char ch;
	customer cust;
	double sum = 0.0;
	cout << "Please enter A to add a purchase order,\n"
	     << "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << "\a";
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a': cout << "Enter a customer fullname to add: ";
				  cin.getline(cust.fullname, 35);
				  cout << "Enter a customer payment to add: ";
				  cin >> cust.payment;
				  if (st.isfull())
					  cout << "stack already full\n";
				  else
					  st.push(cust);
				  break;
			case 'P':
			case 'p': if (st.isempty())
					  cout << "stack already empty\n";
				  else
				  {
					  st.pop(cust);
					  sum += cust.payment;
					  cout << cust.fullname << " is popped\n";
					  cout << cust.payment << " is popped\n";
					  cout << "Sum payment = " << sum << endl;
				  }
				  break;
		}
		cout << "Please enter A to add a purchase order,\n"
	     	     << "P to process a PO, or Q to quit.\n";
		
	}
	cout << "Bye!\n";
	return 0;
}
