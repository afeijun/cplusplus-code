// using the Tv and Remote classes
#include <iostream>
#include "tv.h"

int main(void)
{
	using std::cout;
	Tv s42;
	Remote grey;

	grey.show_rstate();
	grey.set_rstate();
	grey.show_rstate();
	
	s42.set_rstate(grey);
	grey.show_rstate();

	return 0;
}
