
#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
	int cheat = 42;
	int waist = 0x42;
	int inseam = 042;
	cout << "cheat = " << cheat << " (42 in dec)." << endl;
	cout << "waist = " << waist << " (0x42 in hex)." << endl;
	cout << "inseam = " << inseam << " (042 in oct)." << endl;

	return 0;
}
