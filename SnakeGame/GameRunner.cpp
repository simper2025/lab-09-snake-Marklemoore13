#include <Windows.h>
#include <chrono>
#include <ctime>
#include "Console.h"
#include "Point.h"
#include "GameRunner.h"
#include "KeyCommand.h"
#include "KeyBoard.h"
#include "Snake.h"
#include "Mouse.h"

GameRunner::GameRunner(float time)
{
    Keyboard keyboard;
    Snake snake;
    Mouse mouse;
    keypress = KeyCommand::NONE;
}

void GameRunner::runGame() {

    chrono::time_point<chrono::system_clock> runTime;
    chrono::time_point<chrono::system_clock> currentTime;
    runTime = std::chrono::system_clock::now();
    Sleep(300);

    point playerloc = { 0, 10 };
    point direction = { 1, 0 };
    int length = 5;

    //Loop to start drawing and playing.
    //while (keypress != key_ESCAPE) {

    direction = keyboard.keyPressed();

    currentTime = chrono::system_clock::now();

    double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
    if (elapsedTime > 0.3 * 1000) {
        runTime = chrono::system_clock::now();

        //Most of your game logic goes here.

        Console::txtPlot(playerloc, 31);

        Console::setcolor(15);
        Console::gotoxy(1, 21);
        _cprintf("Length: %i", length);


    }

    Sleep(10);
    //}
}
