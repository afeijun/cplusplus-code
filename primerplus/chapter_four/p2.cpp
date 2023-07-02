/*使用array对象（不是数组）和long double（不是long long）重新编写程序：计算阶乘
 *并计算100！
 */
#include <iostream>
#include <array>

using namespace std;
const int Arsize = 101;
int main(void)
{
	//long long factorials[Arsize];
	array<long double,Arsize> factorials;
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i<Arsize; i++)
		factorials[i] = i*factorials[i-1];
	for (int i = 0; i<Arsize; i++)
		cout << i << "! = " << factorials[i] << endl;

	return 0;
}
