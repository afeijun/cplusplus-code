#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <functional>
#include <cstdlib>
#include <algorithm>

using namespace std;
void show(int i) {cout << i << ' ';}

int main(void)
{
	unsigned int num;
	cout << "Please neter tast amount: ";
	cin >> num;
	vector<int> vi0, vi;
	list<int> li;
	for (int i = 0; i < num; i++)
	{
		vi0.push_back(rand() % 65535);
		vi.push_back(vi0[i]);
		li.push_back(vi0[i]);
	}
	clock_t start, end;
	start = clock();
	sort(vi.begin(), vi.end());
	end = clock();
	cout << "STL algorithm sort for vi time: " << (double)(end - start)/CLOCKS_PER_SEC << endl; 
	
	start = clock();
	li.sort();
	end = clock();
	cout << "list sort for li time: " << (double)(end - start)/CLOCKS_PER_SEC << endl;
	
	copy(vi0.begin(), vi0.end(), li.begin());
	start = clock();
	copy(li.begin(), li.end(), vi.begin());
	sort(vi.begin(), vi.end());
	copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	cout << "copy li to vi sort and return time: " << (double)(end - start)/CLOCKS_PER_SEC << endl;
	
	return 0;
}
