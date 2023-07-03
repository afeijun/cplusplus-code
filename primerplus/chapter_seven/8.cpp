// a function that returns a pointer to char
#include <iostream>
char * buildstr(char c, int n); //prototype
using namespace std;

int main(void)
{
	int times;
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps <<endl;
	delete [] ps;
	return 0;
}
// builds string mode of n c characters
char * buildstr(char c, int n)
{
	char * pstr = new char[n+1];
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}
