#include <iostream>
#include <fstream>
#include <cstdlib> // for exit()
#include <vector>
#include <functional>
#include <string>
using namespace std;
class Store
{
	private:
		ofstream & os;
	public:
		Store(ofstream & fout) : os(fout) {}
		void operator()(const string & s);
};

void GetStrs(ifstream & fin, vector<string> & vistr);
void Store::operator()(const string & s)
{
	int len = s.size();
	os.write((char *)&len, sizeof(std::size_t));
	os.write(s.data(), len);
}
void ShowStr(const string & s) {cout << s << endl;}
int main(void)
{
	vector<string> vostr;
	string temp;

	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	return 0;
}

void GetStrs(ifstream & fin, vector<string> & vistr)
{
	int p1;
	char ch;
	string temp;
	while(fin.read((char *) &p1, sizeof (std::size_t)))
	{
		for (int i = 0; i < p1; i++)
		{
			fin.read(&ch, sizeof(char));
			temp.push_back(ch);	
		}
		vistr.push_back(temp);
		temp.clear();
	}
}

