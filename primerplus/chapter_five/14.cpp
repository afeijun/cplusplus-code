//Writing to a file
//要求用户输入信息，然后将信息显示到屏幕上，再将信息写入到文件中。读者可以使用文本编辑器来查看该输出文件的内容
//文件输出的主要步骤：
//1. 包含头文件fstream                        #include <fstream>
//2. 创建一个ofstream对象                     ofstream outFile;
//3. 将该ofstream对象同一个文件关联起来       outFile.open("xx.txt");
//4. 就像使用cout那样使用该ofstream对象       outFile << xxx;
//5. 使用close()方法关闭输出流                outFile.close();
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	char automobile[50];
	int year;
	double a_price, d_price;
	ofstream outfile;
	outfile.open("auto.txt");
	cout << "Please enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	//display information on screen with cout
	cout << fixed;
	cout.precision(2);   // use a precision of 2 for the display
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;
	//now do exact same things using outfile instead of cout
	outfile << fixed;
	outfile.precision(2);
	outfile.setf(ios_base::showpoint);     
	outfile << "Make and model: " << automobile << endl;
	outfile << "Year: " << year << endl;
	outfile << "Was asking $" << a_price << endl;
	outfile << "Now asking $" << d_price << endl;
	outfile.close();
	return 0;
}
