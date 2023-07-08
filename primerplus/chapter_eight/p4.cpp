#include <iostream>
#include <cstring>
using namespace std;
struct stringy
{
	char * str;
	int ct;
};
void set(stringy & b, const char *source);
void show(const stringy b, int n = 1);
void show(const char *str, int n = 1);
int main(void)
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}
void set(stringy & b, const char *source)
{
	b.ct = strlen(source) + 1;
	b.str = new char[b.ct];
	strcpy(b.str, source);
}
void show(const stringy b, int n)
{
	for (int i = 0; i < n; i++)
		cout << "str: " << b.str << endl;
}
void show(const char *str, int n)
{
	for (int i = 0; i < n; i++)
		cout << "testing: " << str << endl;
}

