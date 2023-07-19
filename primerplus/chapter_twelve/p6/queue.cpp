// Queue and Customer methods
#include "queue.h"
#include <cstdlib>

// Queue methods
Queue::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node * temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

bool Queue::enqueue(const Item & item)
{
	if (isfull())
		return false;
	Node * add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

bool Queue::dequeue(Item & item)
{
	if (isempty())
		return false;
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}

// customer method
void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}

Customer & Customer::operator=(const Customer & c)
{
	arrive = c.arrive;
	processtime = c.processtime;
	return *this;
}

bool Queue::operator<(const Queue & q1) const
{
	return items <= q1.items;
}
