#ifndef __P4_H
#define __P4_H

#include <iostream>
using namespace std;
namespace SALES
{
	class Sales
	{
		private:
			static const int QUARTERS = 4;
			double sales[QUARTERS];
			double average;
			double max;
			double min;
		public:
			Sales(const double ar[], int n);
			Sales();
			void showSales() const;
	};
}
#endif
