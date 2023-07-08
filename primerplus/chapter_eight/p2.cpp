#include <iostream>
#include <cstring>
using namespace std;
const int Size = 30;
struct CandyBar
{
	char brand[Size];
	double weight;
	int heat;
};
void set_value(CandyBar & b, const char * str = "Millennium Munch", const double w = 2.85, const int h = 350);
void show(const CandyBar & b);
int main(void)
{
	CandyBar bar;
	set_value(bar);
	show(bar);
	return 0;
}
void set_value(CandyBar & b, const char * str, const double w, const int h)
{
	strcpy(b.brand, str);
	b.weight = w;
	b.heat = h;
}
void show(const CandyBar & b)
{
	cout << "brand: " << b.brand << endl;
	cout << "weight: " << b.weight << endl;
	cout << "heat: " << b.heat << endl;
}
