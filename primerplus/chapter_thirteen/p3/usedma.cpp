// polymorphic example
#include <iostream>
#include <string>
#include "dma.h"

const int DISKS = 4;

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;

	ABC *p_disk[DISKS];
	char label[20];
	char color[20];
	char style[20];
	int rating;
	char kind;

	for (int i = 0; i < DISKS; i++)
	{
		cout << "Enter disk's label: ";
		cin.get(label, 19);
		cout << "Enter disk's rating: ";
		cin >> rating;
		cin.get();
		cout << "Enter 1 for baseDMA or 2 for lacksDMA or 3 for hasDMA: ";
		while(cin >> kind && ((kind != '1' && kind != '2') && kind != '3'))
			cout << "Enter either 1 or 2 or 3: ";
		if (kind == '1')
			p_disk[i] = new baseDMA(label, rating);
		else if (kind == '2')
		{
			cin.get();
			cout << "Enter the disk color: ";
			cin.get(color, 19);
			p_disk[i] = new lacksDMA(color, label, rating);
		}
		else
		{
			cin.get();
			cout << "Enter the disk style: ";
			cin.get(style, 19);
			p_disk[i] = new hasDMA(style, label, rating);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;
	for (int i = 0; i < DISKS; i++)
	{
		p_disk[i]->View();
		cout << endl;
	}

	for (int i = 0; i < DISKS; i++)
		delete p_disk[i];
	
	cout << "Done.\n";
	return 0;
}
