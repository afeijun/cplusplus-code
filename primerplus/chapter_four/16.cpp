
#include <iostream>

using namespace std;

int main(void)
{
	cout << "Enter characters; enter # to quit:\n";
	char ch;
	int count = 0;
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
	return 0;
}
