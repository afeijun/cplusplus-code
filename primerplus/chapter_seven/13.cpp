//程序使用subdivide()来演示分而治之策略，该函数使用一个字符串，该字符串除两端为|字符外，其他全部为空格。
//main()函数使用循环调用subdivide()函数6次，每次将递归层编号加1,并打印得到的字符串。这样，每行输出表示一层递归。
//using recursion to subdivide a ruler
#include <iostream>
using namespace std;
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main(void)
{
	char ruler[Len];
	int i;
	for (i = 1; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[Len-1] = '\0';
	int max = Len -2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++)
			ruler[j] = ' ';
	}
	return 0;
}

void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid = (low + high) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}
