/*编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所以输入的累计加。
 *当用户输入0时，程序结束。
 */

#include <iostream>

using namespace std;

int main(void)
{
	int num,sum=0;
	do{
		cout << "Please enter a number: ";
		cin >> num;
		sum += num;
		cout << "Now,the sum is " << sum << ".\n";
	} while (num);
	cout << "Down." << endl;
	return 0;
}
