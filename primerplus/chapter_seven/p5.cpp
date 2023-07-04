//定义一个递归函数，接受一个整数参数，并返回该参数的阶乘。
//在程序中对该函数进行测试，程序使用循环让用户输入不同的值，程序将报告这些值的阶乘。
#include <iostream>
using namespace std;
long long factorial(unsigned int n);
int main(void)
{
	int num;
	cout << "Please enter an integer: ";
	while (cin >> num)
	{
		cout << num << "!= " << factorial(num) << endl;
		cout << "Please enter an integer: ";
	}
	return 0;
}

long long factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return n*factorial(n-1);
}
