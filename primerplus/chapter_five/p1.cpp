// 编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），同时将大写字符转换为小写，将小写字符转换为大写（别忘了cctype函数系列）
#include <iostream>
#include <cctype>
using namespace std;

int main(void)
{
	char ch;
	cout << "Please enter a line of character: ";
	cin.get(ch);
	while (ch != '@')
	{
		if (isdigit(ch))
		{
			cin.get(ch);
			continue;
		}
		else if (islower(ch))
			ch = toupper(ch);
		else
			ch = tolower(ch);
		cout << ch;
		cin.get(ch);
	}
	return 0;
}
