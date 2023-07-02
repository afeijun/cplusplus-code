/* Daphne以10%的单利投资了100美元。也就是说，每一年的利润都是投资额的10%，即每年10美元： 利息 = 0.10 X 原始存款
 * 而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款（包括获得的利息）的5%,: 利息 = 0.05 X 当前存款
 * Cleo在第一年投资100美元的盈利是5%————得到了105美元。下一年的盈利是105美元的5%————即5.25美元，依次类推。
 * 请编写一个程序，计算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时两个人的投资价值。
 */

#include <iostream>

using namespace std;
const int Deposit_base = 100;
int main(void)
{
	double daphne_deposit = Deposit_base;
	double cleo_deposit = Deposit_base;
	int years;
	for (years = 0; cleo_deposit <= daphne_deposit; years ++)
	{
		daphne_deposit += 10;
		cleo_deposit = cleo_deposit * 0.05 + cleo_deposit;
	}
	cout << "After " << years << " years,cleo_deposit = " << cleo_deposit << " daphne_deposit = " << daphne_deposit << ".\n";

	return 0;
}
