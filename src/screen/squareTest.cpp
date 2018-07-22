
#include <iostream>
#include "Screen.h"


int main()
{
	Screen screen1(6,6,'#');

	screen1.drawSquare(1,5,3);
	screen1.display();
	return 0;

}