// dma class methods
#include <cstring>
#include "dma.h"


// ABC methods
ABC::ABC(const char * l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

ABC::ABC(const ABC & ab)
{
	label = new char[std::strlen(ab.label) + 1];
	std::strcpy(label, ab.label);
	rating = ab.rating;
}

ABC::~ABC()
{
	delete [] label;
}

ABC & ABC::operator=(const ABC & ab)
{
	if (this == &ab)
		return *this;
	delete [] label;
	label = new char[std::strlen(ab.label) + 1];
	std::strcpy(label, ab.label);
	rating = ab.rating;
	return *this;
}
std::ostream & operator<<(std::ostream & os, const ABC & ab)
{
	os << "Label: " << ab.label << std::endl;
	os << "Rating: " << ab.rating << std::endl;
	return os;
}
void ABC::View()
{
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: " << rating << std::endl;
}
// baseDMA methods
baseDMA::~baseDMA()
{
}


void baseDMA::View()
{
	ABC::View();
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r) : ABC(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const ABC & rs) : ABC(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
	os << (const ABC &) ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}

void lacksDMA::View()
{
	ABC::View();
	std::cout << "Color: " << color << std::endl;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : ABC(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const ABC & rs) : ABC(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : ABC(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if (this == &hs)
		return *this;
	ABC::operator=(hs);
	delete [] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
	os << (const ABC &) hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}
void hasDMA::View()
{
	ABC::View();
	std::cout << "Style: " << style << std::endl;
}
