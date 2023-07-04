//编写一个程序，不断要求用户输入两个数，直到其中的一个为0。对于每两个数，程序将使用一个函数来计算它们的调和平均数，并将结果返回给main()，
//而后者将报告结果。调和平均数指的是倒数平均值的倒数，计算公式如下：调和平均数=2.0*x*y/(x+y)
#include <iostream>
using namespace std;

double harmean(double x, double y);
int main(void)
{
	double x,y,result;
	cout << "Please enter x and y:";
	cin >> x >> y;
	while (x&&y)
	{
		result = harmean(x, y);
		cout << "harmean = " << result << endl;
		cout << "Please enter x and y:";
		cin >> x >> y;
	}
	return 0;
}

double harmean (double x, double y)
{
	return 2.0*x*y/(x+y);
}
