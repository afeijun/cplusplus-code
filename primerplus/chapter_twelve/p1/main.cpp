#include <iostream>
#include "p1.h"

int main(void)
{
	Cow c1;
	c1.ShowCow();
	Cow c2 = Cow("hello", "world", 50.55);
        Cow c3 = Cow(c2);
	c1.ShowCow();
	c2.ShowCow();
	c3.ShowCow();	
	c3 = c1;
	c3.ShowCow();
	return 0;
}
