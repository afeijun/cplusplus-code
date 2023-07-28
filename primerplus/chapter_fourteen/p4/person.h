#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <cstring>
#include <cstdlib>
class Person
{
	private:
		std::string fname;
		std::string lname;
	public:
		Person(const std::string f, const std::string l) : fname(f), lname(l) {}
		Person(const char * f, const char * l) : fname(f), lname(l) {}
		Person(){}
		virtual void Show() const {std::cout << "Category: Person\n"; std::cout << lname << ", " << fname << std::endl;}
};
class Gunslinger : virtual public Person
{
	private:
		int notch;
	public:
		Gunslinger(const std::string f, const std::string l, int n) : Person(f, l), notch(n){}
		Gunslinger(const char * f, const char * l, int n) : Person(f, l), notch(n) {}
		Gunslinger(){}
		double Draw() {return 0.7;}
		int Data() const {return notch;}
		virtual void Show() const {std::cout << "Category: Gunslinger\n"; Person::Show();
			std::cout << "notch: " << notch << std::endl;}
};
class Pokerplayer : virtual public Person
{
	private:
		int card;
	public:
		Pokerplayer(const std::string f, const std::string l) : Person(f, l) {card = rand()%52 + 1;}
		Pokerplayer(const char * f, const char * l) : Person(f, l) {card = rand()%52 + 1;}
		Pokerplayer(){}
		int Draw() const {return card;}
		virtual void Show() const {std::cout << "Category: Pokerplayer\n"; Person::Show();
			std::cout << "card: " << card << std::endl;}
};
class BadDude : public Gunslinger, public Pokerplayer
{
	protected:
		double Gdraw() {return Gunslinger::Draw();}
		int Cdraw() {return Pokerplayer::Draw();}
	public:
		BadDude(const std::string & f, const std::string & l, int n) : Person(f, l), Gunslinger(f, l, n), Pokerplayer(f, l) {}
		BadDude(const char * f, const char * l, int n) : Person(f, l), Gunslinger(f, l, n), Pokerplayer(f, l) {}
		BadDude(){}
		void Show() const {
			std::cout << "Category: BadDude\n"; Person::Show();
			std::cout << "notch: " << Gunslinger::Data() << std::endl;
			std::cout << "card: " << Pokerplayer::Draw() << std::endl;
		}
};


	

#endif
