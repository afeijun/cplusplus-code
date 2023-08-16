#include <iostream>

class Cpmv
{
	public:
		struct Info
		{
			std::string qcode;
			std::string zcode;
		};
	private:
		Info *pi;
	public:
		Cpmv();
		Cpmv(std::string q, std::string z);
		Cpmv(const Cpmv & cp);
		Cpmv(Cpmv && mv);
		~Cpmv();
		Cpmv & operator=(const Cpmv & cp);
		Cpmv & operator=(Cpmv && mv);
		Cpmv operator+(const Cpmv & obj) const;
		void Display() const;
};

Cpmv::Cpmv()
{
	std::cout << "default Cpmv called.\n";
	pi = nullptr;
}
Cpmv::Cpmv(std::string q, std::string z)
{
	std::cout << "Cpmv called.\n";
	Info info;
	info.qcode = q;
	info.zcode = z;
	pi = new Info(info);
}
Cpmv::Cpmv(const Cpmv & cp)
{
	std::cout << "const Cpmv & cp called.\n";
	pi = new Info(*(cp.pi));
}
Cpmv::Cpmv(Cpmv && mv)
{
	std::cout << "Cpmv && mv called.\n";
	pi = mv.pi;
	mv.pi = nullptr;
}
Cpmv::~Cpmv()
{
	std::cout << "~Cpmv called.\n";
	delete pi;
}
Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	std::cout << "operator= called.\n";
	if (this == &cp)
		return *this;
	delete pi;
	pi = new Info(*(cp.pi));
	return *this;
}
Cpmv & Cpmv::operator=(Cpmv && mv)
{
	std::cout << "move = called.\n";
	if (this == &mv)
		return *this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}
Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	std::cout << "operator+ called.\n";
	Info info;
	info.qcode = pi->qcode + obj.pi->qcode;
	info.zcode = pi->zcode + obj.pi->zcode;
	Cpmv cp(info.qcode, info.zcode);
	return cp;
}
void Cpmv::Display() const
{
	std::cout << pi->qcode << ", " << pi->zcode << std::endl;
}

int main(void)
{
	using namespace std;
	Cpmv cp1("xxx", "oooo");
	Cpmv cp2(cp1);
	cp1.Display();
	cp2.Display();
	cout << "\n\n";
	Cpmv cp3 = cp1 + cp2;
	cp3.Display();
	cout << "\n\n";
	Cpmv cp4(cp1+cp2);
	cp4.Display();

	cout << "\n\n";
	Cpmv cp5 = cp4;
	cp5.Display();	
	cp1 = cp4;
	cp1.Display();

	cout << "\n\n";
	cp2 = cp3 + cp4;
	cp2.Display();
	return 0;
}
