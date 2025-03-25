#pragma once
#include "Point.h"
#include "Console.h"

class Mouse
{
private:
	point position;
public:
	Mouse();
	void draw();
	void randLocation();
	point getPosition();
};

