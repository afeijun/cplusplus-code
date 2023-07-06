// using a function template
#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b);
int main(void)
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "i, j = " << i << ", " << j << endl;
	
	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << endl;
	cout << "Using compiler-generated double swapper:\n";
	Swap(x, y);
	cout << "x, y = " << x << ", " << y << endl;
		
	return 0;
}
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
