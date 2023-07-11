// using the first draft of the Time class
#include <iostream>
#include "mytime2.h"

int main(void)
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total, diff, adjusted;

	cout << "Planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing;
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;
	
	Time morefixing(3, 28);
	cout << "more fixing time = ";
	morefixing.Show();
	cout << endl;
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;

	diff = fixing - coding;
	cout << "fixing time - coding time = ";
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;
	return 0;
}
