#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
struct patrons
{
	string name;
	double donation;
};

int main(void)
{
	int number,i = 0;
	bool empty = true;
	string file_name;
	ifstream inFile;
	cout << "Enter the file name:";
	getline(cin, file_name);
	inFile.open(file_name);
	if (!inFile.is_open())
	{
		cout << "Failed to open the file!" << endl;
		exit(EXIT_FAILURE);
	}
	inFile >> number;
	patrons *ppatrons = new patrons[number];
	inFile.get();
	while ((!inFile.eof()) && (i < number))
	{
		getline(inFile, ppatrons[i].name);
		cout << "Read name:" << ppatrons[i].name << endl;
		inFile >> ppatrons[i].donation;
		cout << "Donation: " << ppatrons[i].donation << endl;
		i++;
		inFile.get();
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
