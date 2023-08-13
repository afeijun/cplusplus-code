// 编写一个程序计算输入流中第一个$之前的字符数目，并将$留在输入流中。
#include <iostream>

int main(void)
{
	using std::cin;
	using std::endl;
	using std::cout;
	int n = 0;
	char ch;
	cout << "Please enter a string: ";
	while (cin.peek() != '$')
	{
		n++;
		cin.get();
	}
	cout << "The number of characters before the $: " << n << endl;
	ch = cin.get();
	cout << "The next character is: " << ch << endl;
	return 0;
}
