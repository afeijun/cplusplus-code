
#include <iostream>
using namespace std;

int stonetolb(int sts);
int main(void)
{
	cout << "Enter the weight in stone: ";
	int stone;
	cin >> stone;
	int pounds;
	pounds = stonetolb(stone);
	cout << stone << " stone= ";
	cout << pounds <<" pounds." << endl;
	return 0;
}

int stonetolb(int sts)
{
	int pounds = 14*sts;
	return pounds;
}
