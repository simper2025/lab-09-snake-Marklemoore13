#include "GameRunner.h"

GameRunner::GameRunner(double time)
{
    runTime = time;
    keyPress = KeyCommand::NONE;
}

void GameRunner::runGame() {

    chrono::time_point<chrono::system_clock> runTime;
    chrono::time_point<chrono::system_clock> currentTime;
    runTime = std::chrono::system_clock::now();
    Sleep(300);

    int length = 5;

    //Loop to start drawing and playing.
    while (keyPress != KeyCommand::QUIT) {

    keyPress = keyboard.keyPressed();
    if (keyPress == KeyCommand::QUIT)
        break;
    else
        snake.setDirection(keyPress);

    currentTime = chrono::system_clock::now();

    double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
    if (elapsedTime > (runTime * 1000) {
        runTime = chrono::system_clock::now();

        //Most of your game logic goes here.

        //Console::txtPlot(playerloc, 31);
        //_cprintf("Length: %i", length);


    }

    Sleep(10);
    //}
}
