// using placement new
#include <iostream>
#include <new>  // for placement new

const int buf = 512;
const int n = 5;

char buffer[buf];
int main(void)
{
	using namespace std;

	double *pd1, *pd2;
	int i;
	cout << "Calling new and placement new:\n";
	pd1 = new double[n];
	pd2 = new (buffer) double[n];
	for (i = 0; i < n; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	cout << "Memory address:\n" << " heap: " << pd1 << " static: " << (void *) buffer << endl;
	cout << "Memory contents:\n";
	for (i = 0; i < n; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	cout << "\nCalling new and placement new a second time:\n";
	double *pd3, *pd4;
	pd3 = new double[n];
	pd4 = new (buffer) double[n];
	for (i = 0; i < n; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	cout << "Memory contents:\n";
	for (i = 0; i < n; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << "; ";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}
	cout << "\nCalling new and placement new a third time:\n";
	delete [] pd1;
	pd1 = new double[n];
	pd2 = new (buffer + n * sizeof(double)) double[n];
	for (i = 0; i < n; i++)
		pd2[i] = pd1[i] = 1000 + 60 * i;
	cout << "Memory contents:\n";
	for (i = 0; i < n; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	delete [] pd1;
	delete [] pd3;



	return 0;
}
