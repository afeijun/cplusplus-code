//在Neutronia王国，货币单位是tvarp，收入所得税的计算方式如下：
//5000 tvarps：不收税
//5001 ～ 15000 tvarps：10%
//15001 ～ 35000 tvarps：15%
//35000 tvarps 以上： 20%
//例如，收入为38000 tvarps时，所得税为 5000 x 0.00 + 10000 x 0.10 + 20000 x 0.15 + 3000 x0.2,即 4600 tvarps。
//请编写一个程序，使用循环来要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环将结束。
#include <iostream>

using namespace std;

int main(void)
{ 
	double income;
	double tax = 0.0;
	cout << "Please enter your income:";
	while (cin >> income)
	{
		if (income <= 5000)
			tax = 0.0;
		else if (income <=15000)
			tax = 5000*0.00 + (income - 5000) * 0.10;
		else if (income <= 35000)
			tax = 5000*0.00 + 10000*0.10 + (income - 15000) * 0.15;
		else 
			tax = 5000*0.00 + 10000*0.10 + 20000*0.15 + (income - 35000) *0.20;
		cout << "tax = " << tax << " tvarps.\n";
		cout << "Please enter your income:";
	}
	cout << "Bye!" << endl;
	return 0;
}
