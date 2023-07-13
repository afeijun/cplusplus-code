// methods for the Vector class
#include <cmath>
#include "vector.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;


namespace VECTOR
{
	// compute degrees in one radian
	const double Rad_to_deg = 45.0 / atan(1.0);
	
	// private methods
	// calculates magnitude from x and y
	const double Vector::set_mag() const
	{
		return sqrt(x * x + y * y);
	}
	const double Vector::set_ang() const
	{
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y, x); 
	}
	// set x from polar coordinate
	void Vector::set_x(double mag, double ang)
	{
		x = mag * cos(ang);
	}
	// set y from polar coordinate
	void Vector::set_y(double mag, double ang)
	{
		y = mag * sin(ang);
	}

	// public methods
	Vector::Vector()
	{
		x = y = 0.0;
		mode = RECT;
	}
	
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = RECT;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			set_x(n1, n2);
			set_y(n1, n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0\n";
			x = y = 0.0;
		}
	}
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = RECT;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			set_x(n1, n2);
			set_y(n1, n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0\n";
			x = y = 0.0;
		}
	}
	Vector::~Vector()
	{
	}
	void Vector::polar_mode()
	{
		mode = Vector::POL;
	}
	void Vector::rect_mode()
	{
		mode = Vector::RECT;
	}
	// operator overloading
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.magval() << ", " << v.angval() << ")";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}
}
