// 编写一个程序，将键盘输入（直到模拟的文件尾）复制到通过命令行指定的文件中。
// 本程序默认只输入一个文件名
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	using namespace std;
	if (argc == 1)
	{
		cerr << "Usage: " << argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}
	
	ofstream fout;
	fout.open(argv[1], ios_base::out | ios_base::app);
	if (!fout.is_open())
	{
		cerr << "Could not open " << argv[1] << endl;
		fout.clear();
		exit(EXIT_FAILURE);
	}
	char ch;
	cout << "Please enter your contents: ";
	while (cin.get(ch) && ch != '\n')
	{
		cout << ch;
		fout << ch;
	}
	cout << endl;
	fout << endl;
	fout.clear();
	fout.close();

	return 0;
}
