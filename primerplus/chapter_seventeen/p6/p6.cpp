#include <iostream>
#include <fstream>
#include <cstdlib> // for exit()
#include "emp.h"
using namespace std;
const int MAX = 10;
void menu();
void eatline() {while (cin.get() != '\n') continue;}
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		cerr << "Usage: " << argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}
	abstr_emp * pc[MAX];
	ifstream fin;
	fin.open(argv[1], ios_base::in);
	if (fin.is_open())
	{ // 显示数据
		char ch;
		while (!fin.eof())
		{
			fin.get(ch);
			cout << ch;
		}
	}
	fin.clear();
	fin.close();
	ofstream fout;
	fout.open(argv[1], ios_base::out | ios_base::app);
	if (!fout.is_open())
	{
		cerr << "could not open the file.\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	menu();
	cin >> ch;
	eatline();
	int index = 0;
	while (ch != 'q')
	{
		switch(ch)
		{
			case 'e':
				pc[index] = new employee();
				pc[index]->SetAll();
				break;
			case 'm':
				pc[index] = new manager();
				pc[index]->SetAll();
				break;
			case 'f':
				pc[index] = new fink();
				pc[index]->SetAll();
				break;
			case 'h':
				pc[index] = new highfink();
				pc[index]->SetAll();
				break;
		}
		index++;
		if (index == MAX)
		{
			cout << "Input full!\n";
			break;
		}
		cout << "Please again to enter: ";
		cin >> ch;
		eatline();
	}
	for (int i = 0; i < index; i++)
	{
		pc[i]->writeall(fout);
		fout << '\n';
	}
	fout.clear();
	fout.close();
	fin.open(argv[1]);
	if (!fin.is_open())
	{
		cerr << "failed to open " << argv[1] << " file!\n";
		exit(EXIT_FAILURE);
	}
	int i = 0;
	int classtype;
	abstr_emp * pd[MAX];
	//cout << "---------------------" << endl;
	while (fin >> classtype)
	{
		//cout << classtype << endl;
		switch(classtype)
		{
			case abstr_emp::Employee : pd[i] = new employee;
						   //cout << "---------------------" << endl;
						   break;
			case abstr_emp::Manager :  pd[i] = new manager;
						   break;
			case abstr_emp::Fink :     pd[i] = new fink;
						   break;
			case abstr_emp::Highfink : pd[i] = new highfink;
						   break;
		}
		fin.get();
		fin.get();
		pd[i++]->getall(fin);
	}
	//cout << "---------------------" << endl;
	for (int j = 0; j < i; j++)
		pd[j]->ShowAll();
		
	return 0;
}

void menu()
{
	cout << "Enter type of object you want to create: \n";
	cout << "e: employee\t\tm: manager\n";
	cout << "f: fink    \t\th: highfink\n";
	cout << "q: quit\n";
	cout << "Please enter your choice: ";
}
