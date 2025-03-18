#include "GameRunner.h"

GameRunner::GameRunner(double time)
{
    keypress = KeyCommand::NONE;
}

void GameRunner::runGame() {

    chrono::time_point<chrono::system_clock> runTime;
    chrono::time_point<chrono::system_clock> currentTime;
    runTime = std::chrono::system_clock::now();
    Sleep(300);

    int length = 5;

    //Loop to start drawing and playing.
    //while (keypress != key_ESCAPE) {

    keyboard.keyPressed();

    //currentTime = chrono::system_clock::now();

    double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
    if (elapsedTime > 0.3 * 1000) {
        runTime = chrono::system_clock::now();

        //Most of your game logic goes here.

        //Console::txtPlot(playerloc, 31);
        //_cprintf("Length: %i", length);


    }

    Sleep(10);
    //}
}
