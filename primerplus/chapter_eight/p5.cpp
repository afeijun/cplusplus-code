#include <iostream>
using namespace std;
template <class T>
T max5(T t[])
{
	T max = t[0];
	for (int i = 1; i < 5; i++)
		max = max > t[i] ? max : t[i];
	return max;
}

int main(void)
{
	int a[5] = {1, 3, 5, 7, 9};
	double d[5] = {22.2, 13.8, 17.9, 54.2, 38.5};
	cout << "The max value of int arr: " << max5(a) << endl;
	cout << "The max value of double arr: " << max5(d) << endl;
	return 0;
}
