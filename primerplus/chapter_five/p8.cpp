// 编写一个程序，它打开一个文本文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文件包含多少个字符。
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(void)
{
	int number = 0;
	char ch;
	cout << "Starting"<< endl;
	ifstream inFile;
	inFile.open("chapter_six_review.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file chapter_six_review.txt\n";
	        cout << "Program terminating.\n";
		exit (EXIT_FAILURE);	
	}
	inFile >> ch;
	while (inFile.good())
	{
		++number;
		inFile >> ch;
	}
	if (inFile.eof())
		cout << "end of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for known reason.\n";
	cout << "chapter_six_review.txt has " << number << " characters." << endl;
	inFile.close();
	return 0;
}
