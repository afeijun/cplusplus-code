//使用逻辑与设置取值范围
#include <iostream>
using namespace std;
const char *qualify[4] =
{
	"10,000-meter race.\n",
	"mud tug-of-war.\n",
	"masters canoe.\n",
	"Pie-throwing festival.\n"
};
int main(void)
{
	cout << "Enter your age in years: ";
	int age;
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "You qualify for the " << qualify[index];

	return 0;
}
