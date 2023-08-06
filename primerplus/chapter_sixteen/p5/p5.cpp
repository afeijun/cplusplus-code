#include <iostream>
#include <set>
#include <algorithm>
#include <functional>
using namespace std;
void show1(string a) {cout << a << ' ';}
void show(long a) {cout << a << ' ';}
template<class T>
int reduce(T ar[], int n)
{
	int num;
	set<T> ars;
	for (int i = 0; i < n; i++)
		ars.insert(ar[i]);
	num = ars.size();
	copy(ars.begin(), ars.end(), ar);
	return num;
}


int main(void)
{
	long ar[] = {10, 20, 30, 20, 50, 90, 44, 88, 30, 50};
	int numbera = 10;
	string sr[] = {"hello", "world", "hello", "cook", "is", "are", "cook", "my", "name", "world"};
	int numbers = 10;
	for_each(&ar[0], &ar[numbera], show);
	cout << endl;
	for_each(&sr[0], &sr[numbers], show1);
	cout << endl;

	numbera = reduce(ar, numbera);
	numbers = reduce(sr, numbers);
	for_each(&ar[0], &ar[numbera], show);
	cout << endl;
	for_each(&sr[0], &sr[numbers], show1);
	cout << endl;
	return 0;
}

