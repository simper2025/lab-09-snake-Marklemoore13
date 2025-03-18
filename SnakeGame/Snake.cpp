#include "Snake.h"

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
