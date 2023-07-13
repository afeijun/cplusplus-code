// definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
using namespace std;
enum State{STN, DPD, IPD};
class Stonewt
{
	
	//enum State {STN, DPD, IPD};
	private:
		enum {Lbs_per_stn = 14}; // pounds per stone
		int stone;               // whole stones
		double pds_left;         // fractional pounds
		double pounds;           // entire weight in pounds
		State state;
	public:
		Stonewt(double lbs, State st = STN);
		Stonewt(int stn, double lbs, State st = STN);
		Stonewt(State st = STN);
		~Stonewt();
		Stonewt operator+(const Stonewt & st) const;
		Stonewt operator-(const Stonewt & st) const;
		Stonewt operator*(double n);
		friend Stonewt operator*(double n, const Stonewt & st);
		friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};

#endif 

