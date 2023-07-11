#include "p6.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

Move Move::add(const Move & m) const
{
	Move mo;
	mo.x = m.x + x;
	mo.y = m.y + y;
	return mo;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
