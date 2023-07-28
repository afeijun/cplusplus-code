#ifndef QUEUETP_H_
#define QUEUETP_H_
template <class Type>

class Queue
{
	private:
		enum {MAX = 10};
		Type items[MAX];
		int front;
		int rear;
	public:
		Queue();
		bool isempty();
		bool isfull();
		bool push(const Type & item);
		bool pop(Type & item);
};

template <class Type>
Queue<Type>::Queue()
{
	front = rear = 0;
}

template <class Type>
bool Queue<Type>::isempty()
{
	return front == rear;
}

template <class Type>
bool Queue<Type>::isfull()
{
	return front == (rear + 1) % MAX;
}

template <class Type>
bool Queue<Type>::push(const Type & item)
{
	if (!isfull())
	{
		items[(rear++)%MAX] = item;
		return true;
	}
	return false;
}

template <class Type>
bool Queue<Type>::pop(Type & item)
{
	if (!isempty())
	{
		item = items[(front++)%MAX];
		return true;
	}
	return false;
}






#endif
