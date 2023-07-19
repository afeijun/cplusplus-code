// testing the stack class
#include <iostream>
#include <cctype>

#include "stack.h"

int main(void)
{
	using namespace std;
	Stack st(5);
	char ch;
	unsigned long po;
	
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
		cout << "Enter a po number to add: ";
		cin >> po;
		if (st.isfull())
			cout << "Stack already full\n";
		else
			st.push(po);
		cout << "Please enter A to add a purchase order,\n"
	     	     << "P to process a PO, or Q to quit.\n";
		
	}
	Stack st2 = st;
	for (int i = 0; i < 5; i++)
	{
		st.pop(po);
		cout << "PO #" << po << " popped\n";
	}	
	cout << "Bye!\n";
	return 0;
}
