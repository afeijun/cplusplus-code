#include <iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void set_box(box *);
void show(box);

int main(void)
{
	box bo = {"cube", 3, 4, 5};
	set_box(&bo);
	show(bo);
	return 0;
}
void set_box(box * b)
{
	b->volume = b->height * b->width * b->length;
}
void show(box b)
{
	cout << "maker : " << b.maker << endl;
        cout << "height : " << b.height << endl;
	cout << "width : " << b.width << endl;
	cout << "length : " << b.length << endl;
	cout << "volume : " << b.volume << endl;	
}
