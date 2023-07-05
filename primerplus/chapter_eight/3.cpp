//引用与指针的不同之处在于，引用必须在创建时进行初始化，一旦与某个变量关联起来，就将一直效忠于它
//本程序演示了试图将rats变量的引用改为bunnies变量的引用时，将发生的情况
#include <iostream>
using namespace std;

int main(void)
{
	int rats = 101;
	int & rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	
	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;
	return 0;
}
