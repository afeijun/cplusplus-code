// 编写一个程序，它打开两个文本文件进行输入，打开一个文本文件进行输出。
// 该程序将两个输入文件中对应的行并接起来，并用空格分隔，然后将结果写入到输出文件中。
// 如果一个文件比另一个短，则将较长文件中余下的几行直接复制到输出文件中。
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	using namespace std;
	if (argc < 4)
	{
		cerr << "Please enter three filenames!\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin1, fin2;
	fin1.open(argv[1]);
	fin2.open(argv[2]);
	if (!fin1.is_open() || !fin2.is_open())
	{
		cerr << "Failed to open the input files!\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout;
	fout.open(argv[3]);
	if (!fout.is_open())
	{
		cerr << "Failed to open the output file!\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	while (fin1.get(ch))
	{
		if (ch != '\n')
			fout << ch;
		else
		{
			fout << ' ';
			while (fin2.get(ch) && !fin2.eof())
			{
				if (ch != '\n')
					fout << ch;
				else
				{
					fout << endl;	
					break;
				}
			}
		}
	}
	if (!fin2.eof())
	{
		while (fin2.get(ch) && !fin2.eof())
			fout << ch;
	}
	else
		fout << endl;
	fin1.close();
	fin2.close();
	fout.close();
	cout << "finish!\n";

	return 0;
}
