#include "emp.h"

abstr_emp::abstr_emp() {}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_emp::ShowAll() const
{
	std::cout << "name: " << lname << ", " << fname << " job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
	std::cout << "Please enter the fname: ";
	getline(std::cin, fname);
	std::cout << "Please enter the lname: ";
	getline(std::cin, lname);
	std::cout << "Please enter the job: ";
	getline(std::cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << "name: " << e.lname << ", " << e.fname << " job: " << e.job;
	return os;
}

void abstr_emp::writeall(std::ofstream & fout)
{
	fout << lname << " " << fname << " " << job;
}
void abstr_emp::getall(std::ifstream & fin)
{
	char ch;
	while (fin.get(ch))
	{
		if (ch == ' ')
		{
			lname.push_back('\0');
			break;
		}
		lname.push_back(ch);
	}
	while (fin.get(ch))
	{
		if (ch == ' ')
		{
			fname.push_back('\0');
			break;
		}
		fname.push_back(ch);
	}
	while (fin.get(ch))
	{
		if (ch == ' ' || ch == '\n')
		{
			job.push_back('\0');
			break;
		}
		job.push_back(ch);
	}
}

abstr_emp::~abstr_emp() {}

// employee methods
employee::employee() {}

employee::employee(const std::string & fn, const std::string & ln, const std::string & j) : abstr_emp(fn, ln, j)
{}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

void employee::writeall(std::ofstream & fout)
{
	fout << Employee << ": ";
	abstr_emp::writeall(fout);
}

void employee::getall(std::ifstream & fin)
{
	abstr_emp::getall(fin);
}

// manager methods
manager::manager() {}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico)
{}

manager::manager(const manager & m) : abstr_emp(m)
{
	inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout <<"inchargeof: " << inchargeof << std::endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Please enter the inchargeof: ";
	std::cin >> InChargeOf();
	std::cin.get();
}

void manager::writeall(std::ofstream & fout)
{
	fout << Manager << ": ";
	abstr_emp::writeall(fout);
	fout << " " << inchargeof;
}

void manager::getall(std::ifstream & fin)
{
	abstr_emp::getall(fin);
	fin >> inchargeof;
	fin.get();
}
// fink methods
fink::fink() {}

fink::fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo) : abstr_emp(fn, ln, j)
{
	reportsto = rpo;
}

fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo)
{}

fink::fink(const fink & e) : abstr_emp(e)
{
	reportsto = e.reportsto;
}	     

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "reportsto: " << ReportsTo() << std::endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Please enter the reportsto: ";
	getline(std::cin, ReportsTo());
}

void fink::writeall(std::ofstream & fout)
{
	fout << Fink << ": ";
	abstr_emp::writeall(fout);
	fout << " " << reportsto; 
}

void fink::getall(std::ifstream & fin)
{
	abstr_emp::getall(fin);
	char ch;
	while (fin.get(ch))
	{
		if (ch == ' ' || ch == '\n')
		{
			reportsto.push_back('\0');
			break;
		}
		reportsto.push_back(ch);
	}
}
// highfink methods
highfink::highfink() {}

highfink::highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico) : 
	  abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{}

highfink::highfink(const fink & f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{}

highfink::highfink(const manager & m, const std::string & rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{}

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h)
{}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "reportsto: " << ReportsTo() << " inchargeof: " << InChargeOf() << std::endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	std::string & rpo = ReportsTo();
	std::cout << "Please enter the reportsto: ";
	getline(std::cin, rpo);
	std::cout << "Please enter the inchargeof: ";
	std::cin >> InChargeOf();
}

void highfink::writeall(std::ofstream & fout)
{
	fout << Highfink << ": ";
	abstr_emp::writeall(fout);
	fout << " " << ReportsTo() << " " << InChargeOf();
}

void highfink::getall(std::ifstream & fin)
{
	abstr_emp::getall(fin);
	char ch;
	while (fin.get(ch))
	{
		if (ch == ' ' || ch == '\n')
		{
			ReportsTo().push_back('\0');
			break;
		}
		ReportsTo().push_back(ch);
	}
	fin >> InChargeOf();
}
	


