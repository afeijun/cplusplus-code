#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <functional>

using namespace std;
void eatline(){ while (cin.get() != '\n') continue;}
void show(string s) {cout << s << endl;}
void matnpat(string s);
int main(void)
{
	char fri;
	ofstream matout("mat.dat");
	ofstream patout("pat.dat");
	if (!matout.is_open() || !patout.is_open())
	{
		cerr << "Could not open the file!\n";
		exit(EXIT_FAILURE);
	}
	cout << "Please enter your friend names, Mat(Q to quit): ";
	while (cin.get(fri) && fri != 'Q')
		matout << fri;
	eatline();
	cout << "Please enter your friend names, Pat(Q to quit): ";
	while (cin.get(fri) && fri != 'Q')
		patout << fri;
	eatline();
	matout.close();
	patout.close();
	
	ifstream matin("mat.dat");
	ifstream patin("pat.dat");
	if (!matin.is_open() || !patin.is_open())
	{
		cerr << "Could not open the file!\n";
		exit(EXIT_FAILURE);
	}
	ostringstream outstr;
	set<string> matset, patset;
	
	while (matin.get(fri) && !matin.eof())
	{
		if (fri != '\n')
		{
			outstr << fri;
		}
		else
		{
			outstr << '\0';
			matset.insert(outstr.str());
		//	cout << outstr.str() << endl;
			outstr.str("");
		}
	}
	while (patin.get(fri) && !patin.eof())
	{
		if (fri != '\n')
		{
			outstr << fri;
		}
		else
		{
			outstr << '\0';
			patset.insert(outstr.str());
			outstr.str("");
		}
	}
	matin.close();
	patin.close();
	for_each(matset.begin(), matset.end(), show);
	for_each(patset.begin(), patset.end(), show);
	matset.insert(patset.begin(), patset.end());
	for_each(matset.begin(), matset.end(), matnpat);
	return 0;
}

void matnpat(string s)
{
	ofstream matnout("matnpat.dat", ios_base::out | ios_base::app);
	if (!matnout.is_open())
	{
		cerr << "could not open the matnpat.dat file.\n";
		exit(EXIT_FAILURE);
	}
	int i = 0;
	while (s[i] != '\0')
	{
		matnout << s[i];
		i++;
	}
	matnout << '\n';
	matnout.close();
}
