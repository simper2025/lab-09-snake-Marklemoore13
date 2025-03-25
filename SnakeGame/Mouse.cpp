#include "Mouse.h"
#include <ctime>
#include <random>

Mouse::Mouse()
{
	srand(time(0));
	position = { rand() % 20, rand() % 20 };
}

void Mouse::draw()
{
	Console::txtPlot(position, 64);
}

void Mouse::randLocation()
{
	position = { rand() % 20, rand() % 20 };
}

point Mouse::getPosition()
{
	return position;
}
