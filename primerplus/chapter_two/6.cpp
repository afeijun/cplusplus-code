
#include <iostream>
using namespace std;

void simon(int n);
int main(void)
{
	cout <<"Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" <<endl;
	return 0;
}

void simon(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}
