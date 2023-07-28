#ifndef WINEC_H_
#define WINEC_H_
#include <iostream>
#include <valarray>
typedef std::valarray<int> ArrayInt;
template <class T1, class T2>
class Pair
{
	private:
		T1 years;
		T2 bottles;
	public:
		Pair(const T1 & yval, const T2 & bval) : years(yval), bottles(bval) {}
		explicit Pair(int n) : years(n), bottles(n) {}
		Pair(const int * y, const int * b, int n) : years(y, n), bottles(b, n) {}
		Pair() {}
		int b_sum() const {return bottles.sum();}
		void i_Show(int i) const {std::cout << years[i] << "    " << bottles[i];}
		void set(int & a, int & b, int i) {years[i] = a; bottles[i] = b;}		
};

typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
	private:
		std::string label;
		PairArray yandb;
		int y;
	public:
		Wine(const char * l, int y, const int yr[], const int bot[]) : label(l), y(y), yandb(yr, bot, y){}
		Wine(const char * l, int y) : label(l), y(y), yandb(y) {}
		void GetBottles();
		void Show();
		std::string & Label() {return label;}
		int sum() const {return yandb.b_sum();}
};





#endif
