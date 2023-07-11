// class definition for the list ADT
#ifndef LIST_H_
#define LIST_H_
#include <iostream>
using namespace std;
typedef unsigned long Item;

void visit_item(Item &item);
class List
{
	private:
		enum {Max = 10};   //constant specific to class
		Item items[Max];   //holds list items
		int top;           //index for top list item
	public:
		List();
		bool isempty() const;
		bool isfull() const;

		bool add(const Item & item);
		void visit(void (*pf)(Item &));
};



#endif
