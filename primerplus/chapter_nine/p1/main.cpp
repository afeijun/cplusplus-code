#include <iostream>
#include "golf.h"

using namespace std;
const int Size = 2;
int main(void)
{
	int count = 0;
	golf g[Size];
	cout << "Please enter the information of golf players: " << endl;
	while (count < Size && setgolf(g[count]))
	{
		count++;
	}
	cout << "\nShow all golf players information: " << endl;
	for (int i = 0; i < count; i++)
		showgolf(g[i]);
	cout << "\nReset all the players information: " << endl;
	for (int i = 0; i < count; i++)
	{
		handicap(g[i], 90);
		showgolf(g[i]);
	}
	return 0;
}
