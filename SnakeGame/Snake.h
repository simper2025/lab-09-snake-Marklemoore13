#pragma once

#include "Point.h"
#include "KeyCommand.h"
#include <vector>

class Snake
{
private:
	point direction;
	point head;
	int length;
	std::vector<point> tail;
	char headColor;
	char bodyColor;
public:
	Snake(char color1, char color2);
	int getLength();
	void setDirection(KeyCommand keyPress);
	void setTail();
	void draw();
	point getHead();
};

