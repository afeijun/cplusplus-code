// break 与 continue 的区别
// continue跳过循环体剩余的部分，开始新一轮循环
// break跳过循环的剩余部分，到达下一条语句
// 让用户输入一行文本。循环回显每个字符，如果该字符为句点，则使用break结束循环。
// 接下来，程序计算空格数，但不计算其他字符。当字符不为空格时，循环使用continue
// 语句跳过计数部分。

#include <iostream>
const int Arsize = 80;
using namespace std;
int main(void)
{
	char line[Arsize];
	int spaces = 0;
	cout << "Enter a line of text:\n";
	cin.get(line, Arsize);
	cout << "Complete lines:\n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";

	return 0;
}
