//数组求和
#include <iostream>
using namespace std;
const int Arsize = 8;
int sum_arr(const int * begin, const int * end);
int main(void)
{
	int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
	cout << cookies << " = array address, ";
	//cout << sizeof cookies << " = sizeof cookies\n";
	int sum = sum_arr(cookies, cookies + Arsize);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "last four eaters ate " << sum << " cookies.\n";

	return 0;
}

int sum_arr(const int * begin, const int * end)
{
	const int * pt;
	int total = 0;
	//cout << arr << " = arr, ";
	//cout << sizeof arr << " = sizeof arr\n";
	for (pt = begin; pt != end; pt++)
	{
		total += *pt;
	}
	return total;
}