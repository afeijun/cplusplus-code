#include <iostream>
#include <vector>
#include <functional>

using namespace std;
void show(int i) {cout << i << ' ';}
vector<int> Lotto(int random, int n);

int main(void)
{
	vector<int> winners;
	winners = Lotto(51,6);
	for_each(winners.begin(), winners.end(), show);
	cout << endl;
	return 0;
}
vector<int> Lotto(int random, int n)
{
	vector<int> all(random);
	vector<int> win;
	for (int i = 0; i < random; i++)
		all[i] = i+1;
	for (int i = 0; i < n; i++)
	{
		random_shuffle(all.begin(), all.end());
		win.push_back(all[0]);
	}
	return win;

}
