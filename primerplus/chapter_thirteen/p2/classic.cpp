#include <iostream>
#include "classic.h"
#include <cstring>
using namespace std;
// Cd methods
Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[5];
	strcpy(performers, "none");
	label = new char[5];
	strcpy(label, "none");
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{
	delete [] performers;
	delete [] label;
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
	if (this == &d)
		return *this;
	delete [] performers;
	delete [] label;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
// classic methods
Classic::Classic(char * ws, char * s1, char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	works = new char[strlen(ws) + 1];
	strcpy(works, ws);
}

Classic::Classic(const Classic & cs) : Cd(cs)
{
	works = new char[strlen(cs.works) + 1];
	strcpy(works, cs.works);
}

Classic::Classic() : Cd() 
{
	works = new char[5];
	strcpy(works, "none");
}

Classic::~Classic()
{
	delete [] works;
}
void Classic::Report() const
{
	Cd::Report();
	cout << "     works: " << works << endl;
}

Classic & Classic::operator=(const Classic & cs)
{
	if (this == &cs)
		return *this;
	Cd::operator=(cs);
	delete [] works;
	works = new char[strlen(cs.works) + 1];
	strcpy(works, cs.works);
	return *this;
}
