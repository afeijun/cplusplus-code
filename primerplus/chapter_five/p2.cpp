//编写一个程序，最多将10个donation值读入到一个double数组中（如果您愿意，也可使用模板类array）。
//程序遇到非数字输入时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。
#include <iostream>
#include <array>
using namespace std;

const int Arsize = 10;
int main(void)
{
	double donation, sum = 0.0, average;
	array <double, Arsize> arr;
	cout << "Please enter the number for arr:" << endl;
	int i, count = 0;
	for (i = 0; i < Arsize; i++)
	{
		cout << "Next " << i+1 << ": ";
		if (!(cin >> donation))
			break;
		arr[i] = donation;
		sum += donation;
	}
	average = sum / i;
	for (int j = 0; j < i; j++)
	{
		if(arr[j] > average)
			count++;
	}
	cout << "Average = " << average << ", the number that more than average is " << count << endl;
	return 0;
}
