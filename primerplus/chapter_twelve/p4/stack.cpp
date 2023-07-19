// stack member functions
#include "stack.h"
#include <iostream>
using namespace std;
Stack::Stack(int n)
{
	pitems = new Item[n];
	top = 0;
	size = n;
}

Stack::Stack(const Stack & st)
{
	pitems = new Item[st.size];
	top = st.top;
	size = st.size;
	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
	delete [] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item & item)
{
	if (top < size)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack & Stack::operator=(const Stack & st)
{
	size = st.size;
	top = st.top;
	pitems = new Item(size);
	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];
	return *this;
}


