// interface for a queue
#ifndef QUEUE_H_
#define QUEUE_H_
// This queue will contain Customer items
class Customer
{
	private:
		long arrive;
		int processtime;
	public:
		Customer() {arrive = processtime = 0;}
		void set(long when);
		long when() const {return arrive;}
		int ptime() const {return processtime;}
};
// customer method
void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}	

typedef Customer Item;
#endif
