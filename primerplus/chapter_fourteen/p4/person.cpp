// p4 multiple inheritance
#include <iostream>
#include <cstring>
#include "person.h"
const int SIZE = 5;

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	std::string f, l;
	int notch;
	Person * lolas[SIZE];
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"
		     << "g: gunslinger     p: pokerplayer\n"
	     	     << "b: baddude        q: quit\n";
   		cin >> choice;
		while (strchr("gpbq", choice) == NULL)
		{
			cout << "Please enter a g, p, b, or q: ";
			cin >> choice;
		}		
		if (choice == 'q')
			break;
		cin.get();
		cout << "Please enter the first name: ";
		getline(cin, f);
		cout << "Please enter the lase name: ";
		getline(cin, l);
		switch(choice)
		{
			case 'g': cout << "Please enter the notch: ";
				  cin >> notch;	
				  cin.get();
				  lolas[ct] = new Gunslinger(f, l, notch);
				  break;
			case 'p': lolas[ct] = new Pokerplayer(f, l);
				  break;
			case 'b': cout << "PLease enter the notch: ";
				  cin >> notch;
				  cin.get();
				  lolas[ct] = new BadDude(f, l, notch);
				  break;
		}
	}
	cout << endl;
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	cout << "Bye.\n";
	return 0;
}
