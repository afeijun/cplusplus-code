//数组求和
#include <iostream>
using namespace std;
const int Arsize = 8;
int sum_arr(int arr[], int n);
int main(void)
{
	int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
	int sum = sum_arr(cookies, Arsize);
	cout << "Total cookies eaten: " << sum << endl;

	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}
