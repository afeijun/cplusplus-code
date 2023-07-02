
#include <iostream>
using namespace std;

int main(void)
{
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code:" << endl;
	ch++;
	i=ch;	
	
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	cout << "Displaying char ch using cout.put(ch):";
	cout.put(ch);
	cout.put('!');
	cout << endl << "Done" << endl;

	return 0;
}
