// Stonewt methods;
#include <iostream>
#include "stonewt.h"
using std::cout;


Stonewt::Stonewt(double lbs, State st)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
	state = st;
}

Stonewt::Stonewt(int stn, double lbs, State st)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	state = st;
}

Stonewt::Stonewt(State st)
{
	stone = pounds = pds_left = 0;
	state = st;
}

Stonewt::~Stonewt()
{
}
/*
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}
*/
std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	if (st.state == STN)
		os << st.stone << " stone, " << st.pds_left << " pounds\n";
	else if (st.state == DPD)
		os << st.pounds << " pounds\n";
	else
		os << int (st.pounds + 0.5) << " (int)pounds\n";
       return os;	
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
	Stonewt temp;
	temp = pounds + st.pounds;
	return temp;
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
	Stonewt temp;
	temp = pounds - st.pounds;
	return temp;
}

Stonewt Stonewt::operator*(double n)
{
	Stonewt temp = Stonewt(pounds * n);
	return temp;
}

Stonewt operator*(double n, const Stonewt & st)
{
	Stonewt temp = Stonewt(st.pounds * n);
	return temp;
}

