#pragma once
#include "Keyboard.h"
#include "KeyCommand.h"

class GameRunner
{
private:
	KeyCommand keypress;
public:
	GameRunner(float time);
	void runGame();
};

