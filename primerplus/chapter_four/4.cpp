
#include <iostream>

using namespace std;
const int Arsize = 16;
int main(void)
{
	long long factorials[Arsize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i<Arsize; i++)
		factorials[i] = i*factorials[i-1];
	for (int i = 0; i<Arsize; i++)
		cout << i << "! = " << factorials[i] << endl;

	return 0;
}
