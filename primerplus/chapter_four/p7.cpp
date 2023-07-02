/* 设计一个名为car的结构，用它存储下述有关汽车的信息：生产商（存储在字符数组或string对象中的字符串）、生产年份（整数）。
 * 编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建一个由相应数量的car结构组成的动态数组。
 * 接下来，程序提示用户输入每辆车的生产商（可能由多个单词组成）和年份信息。
 * 请注意，这需要特别小心，因为它将交替读取数值和字符串（参见第四章）。
 * 最后，程序将显示每个结构的内容。该程序的运行情况如下：
 * How many cars do you wish to  catalog? 2
 * car #1:
 * please enter the make: Hudson Hornet
 * please enter the year make: 1952
 * Car #2:
 * please enter the make: Kaiser
 * please enter the year made: 1951
 * Here is your collection:
 * 1952 Hudson Hornet
 * 1951 Kaiser
 */
#include <iostream>


using namespace std;

struct Car
{
	string manufacturer;
	int years;
};
int main(void)
{
	int num;
	cout << "How many cars do you wish to catalog?";
	cin >> num;
	cin.get();
	Car *cars = new Car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i+1 << " :\n";
		cout << "Please enter the make: ";
		getline(cin, cars[i].manufacturer);
		cout << "Please enter the year made: ";
		cin >> cars[i].years;
		cin.get();
	}
	cout << "Here is your collection:" << endl;
	for (int i =0; i < num; i++)
		cout << cars[i].years << " " << cars[i].manufacturer << endl;
	delete [] cars;
	return 0;
}
