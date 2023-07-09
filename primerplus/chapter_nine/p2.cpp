// using a static local variable
#include <iostream>
#include <string>
using namespace std;
// function prototype
void strcount(const string str);

int main(void)
{
	string input;
	char next;
	cout << "Enter a line:\n";
	getline(cin, input);
	while(input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const string str)
{
	static int total = 0;
	int count = 0;
	count = str.size();
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
