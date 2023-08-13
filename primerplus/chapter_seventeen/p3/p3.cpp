// 编写一个程序，将一个文件复制到另一个文件中。让程序通过命令行获取文件名。如果文件无法打开，程序将指出这一点。
#include <iostream>
#include <fstream>
#include <cstdlib> // for exit()
	
int main(int argc, char *argv[])
{
	using namespace std;
	if (argc < 3)
	{
		cerr << "Please enter two filename!\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin(argv[1]);
	if (!fin.is_open())
	{
		cerr << "Could not open " << argv[1] << " file\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout(argv[2]);
	if (!fout.is_open())
	{
		cerr << "Could not open " << argv[2] << " file\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	while (fin.get(ch))
		fout << ch;
	fin.close();
	fout.close();
	cout << "finish!\n";
	return 0;
}
