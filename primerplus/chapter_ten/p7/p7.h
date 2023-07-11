#ifndef __P7_H
#define __P7_H

#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 20;
class Plorg
{
	private:
		char name[SIZE];
		int CI;
	public:
		Plorg(const char str[] = "Plorga", int ci = 50);
		void reset(int ci);
		void show() const;
};



#endif
