//BOP项目
#include <iostream>

using namespace std;
const int strsize = 40;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;   // 0 = fullname, 1 = title, 2 = bopname
};

int main(void)
{
	char choice;
	bop member[5] = 
	{
		{"zhuyuanzhang", "heshang", "zhuzhongba", 1},
		{"caocao", "chengxiang", "aman", 2},
		{"lishimin", "wangshang", "laoer", 0},
		{"bangbang", "pingmin", "huoji", 0},
		{"qianlong", "haha", "xiaolong", 2}
	};
	cout << "Benevolent Order of Programmers Report\n"
		"a. display by name           b. display by title\n"
		"c. display by bopname        d. display by preference\n"
		"q. quit\n";
	cout << "Enter your choice:";
	cin >> choice;
	while (choice != 'q')
	{
		int j = -1;
		switch (choice)
		{
			case 'a' : j = 0; break;
			case 'b' : j = 1; break;
			case 'c' : j = 2; break;
			case 'd' : j = 3; break;
			default:   j = -1;
		}
		for (int count = 0; count < 5; count++)
		{
			if (j == -1)
				break;
			else if (j == 0)
				cout << member[count].fullname << endl;
			else if (j == 1)
				cout << member[count].title << endl;
			else if (j == 2)
				cout << member[count].bopname << endl;
			else 
			{
				if (member[count].preference == 0)
					cout << member[count].fullname << endl;
				else if (member[count].preference == 1)
					cout << member[count].title << endl;
				else if (member[count].preference == 2)
					cout << member[count].bopname << endl;
			}

		}
		cout << "Next choice: ";
		cin >> choice;
	}
	cout << "Bye!" << endl;
	return 0;
}
