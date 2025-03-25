#include "Snake.h"
#include "Console.h"

Snake::Snake(char color1, char color2){
	headColor = color1;
	bodyColor = color2;
	direction = { 0,0 };
	head = { 0,1 };
	length = 0;
}

int Snake::getLength()
{
	length++;
	return length;
}

void Snake::setDirection(KeyCommand keyPress)
{
	switch (keyPress) {
	case KeyCommand::UP:
		direction = { 0,-1 };
		break;
	case KeyCommand::DOWN:
		direction = { 0,1 };
		break;
	case KeyCommand::LEFT:
		direction = { -1,0 };
		break;
	case KeyCommand::RIGHT:
		direction = { 1,0 };
		break;
	default:
		break;
	}
}

void Snake::setTail()
{
	tail.push_back(head);
	if (tail.size() > length)
		tail.erase(tail.begin());
}

void Snake::draw()
{
	head.x += direction.x;
	head.y += direction.y;
	Console::txtPlot(head, 70);
	for (int i = tail.size()-1 ; i >= 0; i--)
		Console::txtPlot(tail[i], 71);
}

point Snake::getHead()
{
	return head;
}
