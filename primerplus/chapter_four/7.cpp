
#include <iostream>

using namespace std;

//1) *++pt 2)++*pt 3)(*pt)++ 4)*pt++
int main(void)
{
	double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
	double *pt = arr;
//	cout << *pt << endl;
	cout << "*++pt = " << *++pt << endl;  //pointer add
	cout << "++*pt = " << ++*pt << endl;  //value add
	cout << "(*pt)++ = " << (*pt)++ << endl; //value add
	cout << "*pt = " << *pt << endl; 
	cout << "*pt++ = " << *pt++ << endl;  //pointer add
	cout << "*pt = " << *pt << endl;

	return 0;
}
