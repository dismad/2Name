#include "charDraw.h"
#include <iostream>
#include <ncurses.h>
#include <string.h> 
#include <stdlib.h> 

int main()
{
	short size = 64;
	charDraw test;
	

	test.setSize(size);
	test.setName();
	test.draw();
	test.toText();
	
	
        system("read -p 'Press Enter to continue...' var");
	//system("pause");
	return 0;
}
