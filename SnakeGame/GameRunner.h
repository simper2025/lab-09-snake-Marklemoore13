#pragma once
#include <windows.h>
#include <conio.h>
#include <vector>
#include <ctime>
#include <chrono>

#include "Console.h"
#include "KeyCommand.h"
#include "KeyBoard.h"
#include "Snake.h"
#include "Mouse.h"

using namespace std;

class GameRunner
{
private:
	KeyCommand keyPress;
	Keyboard keyboard;
	Snake snake;
	Mouse mouse;
	double runTime;
public:
	GameRunner(double time);
	void runGame();
};

