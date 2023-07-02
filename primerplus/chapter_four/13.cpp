
#include <iostream>

using namespace std;
const int arsize = 20;
int main(void)
{
	char name[arsize];   // string name;
	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name: " << endl;
	int i = 0;
	while(name[i] != '\0')  //while(name[i])
	{
		cout << name[i] << " : " << int(name[i]) << endl;
		i++;
	}
	return 0;
}
