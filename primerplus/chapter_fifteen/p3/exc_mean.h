// exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class bad_mean : public std::logic_error
{
	private:
		double x;
		double y;
	public:
		bad_mean(double b1, double b2, const std::string & s = "I am bad_mean\n") : std::logic_error(s), x(b1), y(b2) {}
		const double obtain_x() {return x;}
		const double obtain_y() {return y;}
		virtual ~bad_mean() throw() {}
};

class bad_hmean : public bad_mean
{
	public:
		bad_hmean(double b1, double b2, const std::string & s = "I am bad_hmean\n") : bad_mean(b1, b2, s) {}
		void show() {std::cout << "I am show, x = " << obtain_x() << ", y = " << obtain_y() << std::endl;}
		virtual ~bad_hmean() throw() {}
};

class bad_gmean : public bad_mean
{
	public:
		bad_gmean(double b1, double b2, const std::string & s = "I am bad_gmean\n") : bad_mean(b1, b2, s) {}
		void show() {std::cout << "I am show, x = " << obtain_x() << ", y = " << obtain_y() << std::endl;}
		virtual ~bad_gmean() throw() {}
};


