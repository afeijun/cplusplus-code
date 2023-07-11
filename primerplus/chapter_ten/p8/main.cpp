#include "list.h"

int main(void)
{
	List list;
	Item n;
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter a number: ";
		cin >> n;
		list.add(n);
		//list.visit(visit_item);
	}
	list.visit(visit_item);
	return 0;
}
