/* 假设要销售《C++ For Fools》一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而不是销售额）。
 * 程序通过循环，使用初始化为月份字符串的char*数组（或string对象数组）逐月进行提示，并将输入的数据储存在一个int数组中。
 * 然后，程序计算数组中各元素的总数，并报告这一年的销售情况。
 * 完成编程练习5,但这一次使用一个二维数组来存储输入————3年中每个月的销售量。程序将报告每年销售量以及三年的总销售量。
 */
#include <iostream>

using namespace std;
const int Years = 3;
int main(void)
{
	const string Month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int sale_num[3][12];
	int sale_sum[3];
	int sum = 0;
	for (int year = 0; year < Years; year++ )
	{
		cout << "Please enter " << year+1 << "st year sale: " << endl;
		for (int i =0; i < 12; i++)
		{
			cout << "Enter the sale number of " << Month[i] << " : ";
			cin >> sale_num[year][i];
			sale_sum[year] += sale_num[year][i];
		}
		sum += sale_sum[year];
	}
	cout << "Input Down!" << endl;
	for (int year = 0; year < Years; year++)	
		cout << "The " << year+1 << "st year total sale number: " << sale_sum[year] << ".\n";	
	cout << "Total sale: " << sum << endl;
	return 0;
}
