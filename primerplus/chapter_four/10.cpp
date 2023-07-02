
#include <iostream>

using namespace std;

int main(void)
{
	int arr[10] = {20,20,20,20,20,19,20,18,20,20};
	cout << "Doing is right:" << endl;
	int i;
	for (i = 0; arr[i] == 20; i++)
		cout << "arr " << i << " is a 20." << endl;

	cout << "Doing it dangerously wrong: " << endl;
	for (i = 0; arr[i] == 20; i++)
		cout << "arr " << i << " is a 20." << endl;

	return 0;
}
