#pragma once

#include "Point.h"
#include "KeyCommand.h"

class Snake
{
private:
	point direction;
public:
	void setDirection(KeyCommand keyPress);
};

