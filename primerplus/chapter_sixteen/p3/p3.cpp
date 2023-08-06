// some string methods
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>

int main(void)
{
	using namespace std;

	ifstream fin;
	fin.open("p3.txt");
	if (fin.is_open() == false)
	{
		cerr << "Can't open file. Bye.\n";
		exit(EXIT_FAILURE);
	}
	vector<string> words;
	string item;
	while (fin >> item)
	{
		words.push_back(item);
	}
	int n = words.size();
	cout << "word amount = " << n << "\nwords: ";
	for (int i = 0; i < n; i++)
		cout << words[i] << ' ';
	cout << endl;
	cout << "bye.\n";

	return 0;
}
