//读取数字的循环
//假设要编写一个程序，来计算平均每天捕获的鱼的重量。这里假设每天最多捕获5条鱼，
//因此一个包含5个元素的数组将足以存储所有的数据，但也可能没有捕获这么多鱼。
//如果数组被填满或者输入了非数字输入，循环将结束。
#include <iostream>
const int Max = 5;
using namespace std;

int main()
{
	double fish[Max];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
	cout << "fish #1: ";
	int i = 0;
	for (i; i < Max; i++)
	{
		cout << "fish #" << i+1 << ": ";
		while (!(cin >> fish[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a number: ";
		}
	}
	/*while (i < Max && cin >> fish[i])
	{
		if (++i < Max)
			cout << "fish #" << i+1 << ": ";
	}*/
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	if (i == 0)
		cout << "No fish\n";
	else
		cout  << total / i << " = average weight of "
			<< i << " fish\n";
	cout << "Done.\n";
	return 0;
}
