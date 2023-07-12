// definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_


class Stonewt
{
	private:
		enum {Lbs_per_stn = 14}; // pounds per stone
		int stone;               // whole stones
		double pds_left;         // fractional pounds
		double pounds;           // entire weight in pounds
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		~Stonewt();
		void show_lbs() const;
		void show_stn() const;
};

#endif 

