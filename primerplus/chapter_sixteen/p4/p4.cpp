#include <iostream>
#include <set>
#include <algorithm>
#include <functional>
using namespace std;

int reduce(long ar[], int n);
void show(long a) {cout << a << ' ';}
int main(void)
{
	long ar[] = {10, 20, 30, 20, 50, 90, 44, 88, 30, 50};
	int number = 10;
	for_each(&ar[0], &ar[number], show);
	cout << endl;

	number = reduce(ar, number);
	for_each(&ar[0], &ar[number], show);
	cout << endl;
	return 0;
}

int reduce(long ar[], int n)
{
	int num;
	set<long> ars;
	for (int i = 0; i < n; i++)
		ars.insert(ar[i]);
	for_each(ars.begin(), ars.end(), show);
	cout << endl;
	num = ars.size();
	copy(ars.begin(), ars.end(), ar);
	return num;
}
