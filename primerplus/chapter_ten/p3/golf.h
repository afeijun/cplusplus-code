#ifndef __GOLF_H
#define __GOLF_H

#include <iostream>
#include <cstring>
using namespace std;

class golf
{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		golf(const char * name, int hc);
		golf();
		void sethandicap(int hc);
		void showgolf() const;
};

#endif
