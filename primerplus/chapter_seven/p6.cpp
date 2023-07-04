#include <iostream>
using namespace std;
int fill_array(double array[], int size);
void show_array(double array[], int size);
void reverse_array(double array[], int size);
const int MAX = 40;
int main(void)
{
	double array[MAX];
	int size = fill_array(array,MAX);
	show_array(array, size);
	reverse_array(array, size);
	show_array(array, size);
	reverse_array(array+1, size-2);
	show_array(array, size);
	return 0;
}
int fill_array(double array [], int size)
{
	int i;
	double temp;
	for (i = 0; i < size; i++)
	{
		cout << "please enter a number:";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n');
			break;
		}
		else
			array[i] = temp;
	}
	return i;
}
void show_array(double array[], int size)
{
	cout << "The array content: " << endl;
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}
void reverse_array(double array[], int size)
{
	double temp;
	for(int i = 0; i < size/2; i++)
	{
		temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}
}
