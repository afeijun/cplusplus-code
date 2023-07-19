// stringbad class methods
#include <cstring>
#include <cctype>
#include "string2.h"
using std::cout;
using std::cin;

//initializing static class member
int String::num_strings = 0;

// static method
int String::HowMany()
{
	return num_strings;
}
// class method
String::String(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char [len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

// overloaded operator methods
String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char [len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String & String::operator=(const char * s)
{
	delete [] str;
	len = std::strlen(s);
	str = new char [len + 1];
	std::strcpy(str, s);
	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

String operator+(const String & s1, const String & s2)
{
	String temp;
	temp.len = s1.len + s2.len;
	temp.str = new char [temp.len + 1];
	strcpy(temp.str, s1.str);
	strcpy(temp.str + s1.len, s2.str);
	return temp;
}

String & String::stringlow()
{
	for (int i = 0; i < len; i++)
		str[i] = tolower(str[i]);
	return *this;
}

String & String::stringup()
{
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
	return *this;
}

int String::has(const char & ch) const
{
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ch)
			num++;
	}	
	return num;
}
// overloaded operator friends
bool operator<(const String & st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String & st1, const String & st2)
{
	return st2 < st1;
}

bool operator==(const String & st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

