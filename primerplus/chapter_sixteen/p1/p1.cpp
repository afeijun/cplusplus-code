#include <iostream>
#include <string>

using namespace std;
bool palindrome(const string & w);
int main(void)
{
	string words;
	bool isp;
	cout << "Please enter words (quit to quit): ";
	while (cin >> words && words != "quit")
	{
		isp = palindrome(words);
		if (isp)
			cout << words << " is palindrome.\n";
		else
			cout << words << " is not palindrome.\n";
		cout << "Please enter words (quit to quit): ";	
	}
	cout << "bye.\n";
	return 0;
}
bool palindrome(const string & w)
{
	int n = w.size();
	for (int i = 0; i < n/2; i++)
	{
		if (w[i] != w[n-i-1])
			return false;
	}
	return true;
}
