//使用一个函数来计算特定的字符在字符串中出现的次数。
//该程序不需要处理负数，可以将计数变量的类型声明为unsigned int。
#include <iostream>
using namespace std;
unsigned int c_int_str(const char *str, char ch);

int main(void)
{
	char mmm[15] = "minimum";
	char *wail = "ululate";
	unsigned int ms = c_int_str(mmm, 'm');
	unsigned int us = c_int_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;
	return 0;
}
// this function counts the number of ch characters
unsigned int c_int_str(const char * str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}
