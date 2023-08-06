#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

void show(string n) {cout << n << ", ";}

int main(void)
{
	string name;
	set<string> matset, patset;
	cout << "Mat, please enter your friend name (end to quit): ";
	getline(cin, name);
	while (name != "end")
	{
		matset.insert(name);
		cout << "continue: ";
		getline(cin, name);
	}
	for_each(matset.begin(), matset.end(), show);
	cout << endl;
	cout << "Pat, please enter your friend name (end to quit): ";
	getline(cin, name);
	while (name != "end")
	{
		patset.insert(name);
		cout << "continue: ";
		getline(cin, name);
	}
	for_each(patset.begin(), patset.end(), show);
	cout << endl;
	set<string> unionset;
	unionset.insert(matset.begin(), matset.end());
	unionset.insert(patset.begin(), patset.end());
	for_each(unionset.begin(), unionset.end(), show);
	cout << endl;

	return 0;
}
