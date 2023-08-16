// 编写可变参数模板函数sum_value(), 它接受任意长度的参数列表（其中包含数值，但可以是任何类型），并以long double的方式返回这些数值的和
#include <iostream>

using namespace std;

long double sum_value() {return 0;}
template<typename T, typename...Args>
long double sum_value(const T& value, const Args&...args)
{
	return value + sum_value(args...);
}
int main(void)
{
	long double sum = sum_value(14, 13.55, 7, 10);
	cout << "sum = " << sum << endl;
	cout << "sum = " << sum_value(14, 'A', 10.5) << endl;
	return 0;
}
