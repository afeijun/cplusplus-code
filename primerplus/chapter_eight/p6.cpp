#include <iostream>
#include <string>
using namespace std;
template <typename T>
T max(T t[], int n);
template <> 
string max(string str[], int n);

int main(void)
{
	int a[6] = {1, 3, 5, 7, 9, 11};
	double d[4] = {22.2, 13.8, 17.9, 38.5};
	string str[5] = {"Hello world", "Good morning", "I love you, Rick", "what's this", "ByeBye"};
	cout << "The max value of int arr: " << max(a, 6) << endl;
	cout << "The max value of double arr:" << max(d, 4) << endl;
	cout << "The max value of str: " << max(str, 5) << endl;
	return 0;
}

template <class T>
T max(T t[], int n)
{
	T temp = t[0];
	for (int i = 1; i < n; i++)
		temp = temp > t[i] ? temp : t[i];
	return temp;
}
template <>
string max(string str[], int n)
{
	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		if(str[pos].size() < str[i].size())
			pos = i;
	}
	return str[pos];
}
	
