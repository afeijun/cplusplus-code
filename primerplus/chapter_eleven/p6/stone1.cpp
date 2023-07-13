// user-defined conversion functions
#include <iostream>
using namespace std;
#include "stonewt1.h"
int main()
{
	Stonewt temp = Stonewt(11, 0);
	Stonewt st[6] = {100, 200, 155, 130, 160, 240};
	Stonewt *Max, *Min;
	Max = Min = &st[0];
        int num = 0;	
	for (int i = 0; i < 6; i++)
	{
		if ((*Max) < st[i])
			Max = &st[i];
		else if ((*Min) > st[i])
			Min = &st[i];
		if (temp <= st[i])
			num++;
	}
	cout << "max: ";
	(*Max).show_stn();
	cout << "min: ";
	(*Min).show_stn();
	cout << "num = " << num << std::endl;
	return 0;
}

