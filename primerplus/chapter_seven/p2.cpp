//编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存储在一个数组中。程序允许用户提早结束输入，并在一行上显示所以成绩，
//然后报告平均成绩。请使用3个数组处理函数来分别进行输入、显示和计算平均成绩。
#include <iostream>
using namespace std;
int input(double score[], int n);
void show (const double score[], int n, double value);
double average(const double score[], int n);
const int num = 10;
int main(void)
{
	double score[num], aver;
	int count;
	count = input(score,num);
	aver = average(score, count);
	show(score, count, aver);
	return 0;
}
int input(double score[], int n)
{
	int count = 0;
	double temp;
	cout << "Please enter the score, press q-key to quit:\n";
	for (int i = 0; i < n; i ++)
	{
		cout << "score #" << i+1 << " : ";
		if(!(cin >> temp))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Invalid input, terminate." << endl;
			
			break;
		}
		score[i] = temp;
		count++;
	}
	return count;
}

void show(const double score[], int n, double value)
{
	for (int i = 0; i < n; i++)
	{
		cout << "score #" << i+1 << " : ";
	        cout << score[i] << endl;
	}
	cout << "average score = " << value << endl;;
}
double average(const double score[], int n)
{
	double aver, sum = 0.0;
	for (int i = 0; i < n; i++)
		sum += score[i];
	aver = sum / n;
	return aver;
}
