//#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h> 

using namespace std;

class charDraw
{
public:
	charDraw(void);
	~charDraw(void);
	void setSize(short strLength);
	void setName(void);
	void draw(void);
	void toText(void);

private:
	char* input;
	char letter;
	char index;
	short size;
	ofstream outStream;
};
