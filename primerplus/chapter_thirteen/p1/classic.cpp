#include <iostream>
#include "classic.h"
#include <cstring>
using namespace std;
// Cd methods
Cd::Cd(char * s1, char * s2, int n, double x)
{
	if (strlen(s1) >= 50)
	{
		strncpy(performers, s1, 49);
		performers[49] = '\0';
	}
	else
		strcpy(performers, s1);
	if (strlen(s2) >= 20)
	{
		strncpy(label, s2, 19);
		label[19] = '\0';
	}
	else
		strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	strcpy(performers, "none");
	strcpy(label, "none");
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{
}
void Cd::Report() const
{
	cout << "performers: " << performers << endl;
	cout << "     label: " << label << endl;
        cout << "selections: " << selections << endl;
	cout << "  playtime: " << playtime << endl;	
}

Cd & Cd::operator=(const Cd & d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
// classic methods
Classic::Classic(char * ws, char * s1, char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	if (strlen(ws) >= 50)
	{
		strncpy(works, ws, 49);
		works[49] = '\0';
	}
	else
		strcpy(works, ws);
}

Classic::Classic(const Classic & cs) : Cd(cs)
{
	strcpy(works, cs.works);
}

Classic::Classic() : Cd() 
{
	strcpy(works, "none");
}

Classic::~Classic()
{
}
void Classic::Report() const
{
	Cd::Report();
	cout << "     works: " << works << endl;
}

Classic & Classic::operator=(const Classic & cs)
{
	Cd::operator=(cs);
	strcpy(works, cs.works);
	return *this;
}
