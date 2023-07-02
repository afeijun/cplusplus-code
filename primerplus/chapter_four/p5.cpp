/* 假设要销售《C++ For Fools》一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而不是销售额）。
 * 程序通过循环，使用初始化为月份字符串的char*数组（或string对象数组）逐月进行提示，并将输入的数据储存在一个int数组中。
 * 然后，程序计算数组中各元素的总数，并报告这一年的销售情况。
 */
#include <iostream>

using namespace std;

int main(void)
{
	const string Month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sale_num[12];
	int sale_sum = 0;
	for (int i =0; i < 12; i++)
	{
		cout << "Enter the sale number of " << Month[i] << " : ";
		cin >> sale_num[i];
	}
	cout << "Input Done!" << endl;
	for (int i =0; i < 12; i++)
		sale_sum += sale_num[i];
	cout << "Total sale: " << sale_sum << endl;
	return 0;
}
