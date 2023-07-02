#include <iostream>
using namespace std;

int main(void)
{
	char ch;
	int total = 0, count = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			count ++;
		total ++;
		cin.get(ch);
	}
	cout << count << " spaces, " << total << " characters total in sentence\n";
	return 0;
}
