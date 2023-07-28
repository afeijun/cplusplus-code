#ifndef WINEC_H_
#define WINEC_H_
#include <iostream>
#include <valarray>
#include <string>
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

class Wine : private std::string, private PairArray
{
	private:
		int y;
	public:
		Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), y(y), PairArray(yr, bot, y){}
		Wine(const char * l, int y) : std::string(l), y(y), PairArray(y) {}
		void GetBottles();
		void Show();
		const std::string & Label() {return (const std::string &) *this;}
		int sum() const {return PairArray::b_sum();}
};





#endif
