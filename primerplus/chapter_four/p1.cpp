/*编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。
 *这里假设先输入较小的整数。例如，如果用户输入的是2和9,则程序将指出2～9之间所以整数的和为44
 */

#include <iostream>

using namespace std;

int main(void)
{
	int fnum,lnum,sum;
	cout << "Please enter the first number: ";
	cin >> fnum;
	cout << "Please enter the second number: ";
	cin >> lnum;
	sum = 0;
	for (int i = fnum; i <= lnum; i++)
		sum += i;
	cout << "The sum is " << sum << " in the between " << fnum << " and " << lnum << ".\n";
	return 0;
}

