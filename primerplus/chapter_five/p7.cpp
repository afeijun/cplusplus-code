#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void)
{
	string words;
	int vowels = 0, consonants = 0, others = 0;
	cout << "Enter words (q to quit):" << endl;
	while ((cin >> words) && (words != "q"))
	{
		if (isalpha(words[0]))
		{
			switch (words[0])
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					vowels++;
					break;
				default:
					consonants++;
			}
		}
		else
			others++;
	}
	cout << "vowels:" << vowels << endl;
	cout << "consonants:" << consonants << endl;
	cout << "others:" << others << endl;
	
	return 0;
}
