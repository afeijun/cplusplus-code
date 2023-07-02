
#include <iostream>

using namespace std;

int main(void)
{
	cout << "Enter characters; enter # to quit:\n";
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
	return 0;
}
