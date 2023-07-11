// class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_
struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
	private:
		enum {Max = 10};   //constant specific to class
		Item items[Max];   //holds stack items
		int top;           //index for top stack item
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;

		bool push(const Item & item);
		bool pop(Item & item);
};



#endif
