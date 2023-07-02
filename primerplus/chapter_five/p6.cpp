#include <iostream>
using namespace std;
struct patrons
{
	string name;
	double donation;
};

int main(void)
{
	int number;
	bool empty = true;
	cout << "Enter the number of doners:";
	cin >> number;
	patrons *ppatrons = new patrons[number];
	for (int i = 0; i < number; i++)
	{
		cout << "doner #" << i+1 << ": " << endl;
		cout << "Enter the name of donor:";
		cin >> ppatrons[i].name;
		cout << "Enter the donation amount:";
		cin >> ppatrons[i].donation;
	}
	cout << "**************Grand Patrons**************" << endl;
	for (int i = 0; i < number; i++)
	{
		if (ppatrons[i].donation >= 10000)
		{
			cout << ppatrons[i].name << " : " << ppatrons[i].donation << endl;
			empty = false;
		}
	}
	if (empty == true)
		cout << "None" << endl;
	empty = true;
	cout << "*************Patrons*************" << endl;
	for (int i = 0; i < number; i++)
	{
		if (ppatrons[i].donation < 10000)
		{
			cout << ppatrons[i].name << " : " << ppatrons[i].donation << endl;
			empty = false;
		}
	}
	if (empty == true)
		cout << "None" << endl;

	
	return 0;
}
