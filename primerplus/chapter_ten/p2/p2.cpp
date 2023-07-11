#include "p2.h"
#include <cstring>
Person::Person(const string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show(void) const
{
	if (lname == "" && fname[0] == '\0')
		cout << "No name: " << endl;
	else
		cout << "Person name: " << fname << " " << lname << endl;
}

void Person::FormalShow(void) const
{
	if (lname == "" && fname[0] == '\0')
		cout << "No name: " << endl;
	else
		cout << "Person name: " << lname << ", " << fname << endl;
}
