// class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
	private:
		enum {Max = 10};   //constant specific to class
		Item * pitems;   //holds stack items
		int size;
		int top;           //index for top stack item
	public:
		Stack(int n = Max);
		Stack(const Stack & st);
		~Stack();

		bool isempty() const;
		bool isfull() const;

		bool push(const Item & item);
		bool pop(Item & item);

		Stack & operator=(const Stack & st);
};



#endif
