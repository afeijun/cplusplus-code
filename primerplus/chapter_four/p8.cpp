/* 编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。
 * 随后，该程序指出用户输入了多少个单词（不包括done在内）。下面是该程序的运行情况：
 * Enter words(to stop, type the word done):
 * anteater birthday category dumpster envy finagle geometry done for sure
 * You entered a total of 7 words.
 * 您应在程序中包含头文件cstring，并使用函数strcmp（）来进行比较测试。
 */

#include <iostream>
#include <cstring>
using namespace std;
const char DONE[] = "done";

int main(void)
{
	cout << "Enter words(to stop,type the word done):" << endl;
	char words[20];
	cin >> words;
	cin.get();
	int i = 0;
	while (strcmp(words,DONE))
	{
		i++;
		cin >> words;
		cin.get();
	}
	cout << "You entered a total of " << i << " words." << endl;
	return 0;
}
