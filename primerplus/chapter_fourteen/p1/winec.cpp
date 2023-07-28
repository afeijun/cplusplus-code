#include "winec.h"

void Wine::GetBottles()
{
	ArrayInt years(y);
	ArrayInt bottles(y);
	std::cout << "Enter " << label << " data for " << y << " year(s):\n";
	for (int i = 0; i < y; i++)
	{
		std::cout << "Enter year: ";
		std::cin >> years[i];
		std::cout << "Enter bottles for that year: ";
		std::cin >> bottles[i];
		yandb.set(years[i], bottles[i], i);
	}
	

}

void Wine::Show()
{
	using std::cout;
	using std::endl;
	cout << "Wine: " << label << endl;
	cout << "      Year    Bottles\n";
	for (int i = 0; i < y; i++)
	{
		cout << "      ";
		yandb.i_Show(i);
		cout << endl;
	}

}



