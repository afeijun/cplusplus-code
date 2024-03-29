// using a static local variable
#include <iostream>
const int arsize = 10;
// function prototype
void strcount(const char *str);

int main(void)
{
	using namespace std;
	char input[arsize];
	char next;
	cout << "Enter a line:\n";
	cin.get(input, arsize);
	while(cin)
	{
		cin.get(next);
		while(next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, arsize);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const char *str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	while (*str++)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
