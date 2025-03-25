#pragma once

#include <Windows.h>
#include "Point.h"
#include <string>

class Console
{
private:
	static void gotoxy(int x, int y);
	static void setcolor(WORD color);
public:
	static void txtPlot(point item, unsigned char Color);
	static void txtWrite(point item, unsigned char Color, std::string textInput);
};

