
#include <iostream>
using namespace std;

int main(void)
{
	long long pop_global,pop_America;
	cout << "Enter the world's population:";
	cin >> pop_global;
	cout << "Enter the population of the US:";
	cin >> pop_America;
	cout << "The population of the US is " << (double)pop_America/pop_global*100;
	cout << "\% of the world population." << endl;
	return 0;
}
