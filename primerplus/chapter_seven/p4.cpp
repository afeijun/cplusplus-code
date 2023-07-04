//probability of winning
//从51个数字中选取6个。随后，彩票管理者将随机抽取6个数。如果参与者选择的数字与这6个完全相同，将赢得大约几百万美元
//的奖金。试用函数计算中奖的几率。
#include <iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main(void)
{
	double total, choices;
	long double field = probability(47, 5);
	long double special = probability(27, 1);
	long double result = field *special;
	cout << result << endl;
	cout << "bye\n";
	return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}