// 程序清单16.15, 使用lambda表达式
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main(void)
{
	using std::list;
	using std::cout;
	using std::endl;

	int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);

	auto lambda_outint = [](int x) {cout << x << " ";};
	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), lambda_outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), lambda_outint);
	cout << endl;
	yadayada.remove_if([](const int & v) {return v > 100;});
	etcetera.remove_if([](const int & v) {return v > 200;});
	cout << "Trimmed lists:\n";
	for_each(yadayada.begin(), yadayada.end(), lambda_outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), lambda_outint);
	cout << endl;

	return 0;
}


