
#include <iostream>

using namespace std;

const int Cities = 5;
const int Years = 4;

int main(void)
{
	const char *cities[Cities] = 
	{
		"Gribble city",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble vista"
	};
	int maxtemps[Years][Cities] =
	{
		{96, 100, 87, 101, 105},
		{98, 103, 90, 97, 100},
		{100, 97, 93, 100, 99},
		{109, 106, 89, 99, 96}
	};
	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int i = 0; i < Cities; i++)
	{
		cout << cities[i] << " :\t";
		for (int j = 0;j < Years; j++)
			cout << maxtemps[j][i] << "\t";
		cout << endl;
	}


	return 0;
}
