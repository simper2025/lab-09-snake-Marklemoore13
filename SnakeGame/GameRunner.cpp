#include "GameRunner.h"

GameRunner::GameRunner(double time):snake(16, 48)
{
    runTime = time;
    keyPress = keyboard.keyPressed();
    mouse.draw();
    snake.draw();
}

void GameRunner::runGame() {

    chrono::time_point<chrono::system_clock> runTime;
    chrono::time_point<chrono::system_clock> currentTime;
    runTime = std::chrono::system_clock::now();
    Sleep(300);

    //Loop to start drawing and playing.
    while (keyPress != KeyCommand::QUIT) {

        for (int i = 0; i <= 20; i++)
            for (int j = 0; j <= 20; j++)
                Console::txtPlot({ i, j }, 32);

        keyPress = keyboard.keyPressed();
        if (keyPress == KeyCommand::QUIT)
            break;
        else
            snake.setDirection(keyPress);

        currentTime = chrono::system_clock::now();

        double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
        if (elapsedTime > (.3 * 1000)) {
            runTime = chrono::system_clock::now();

            //Most of your game logic goes here.
            keyPress = keyboard.keyPressed();
            if (keyPress == KeyCommand::QUIT)
                break;
            else
                snake.setDirection(keyPress);
            
            snake.draw();
            if (snake.getHead().x > 20 || snake.getHead().x < 0 || snake.getHead().y > 20 || snake.getHead().y < 0)
                break;
            if (snake.getHead().x == mouse.getPosition().x && snake.getHead().y == mouse.getPosition().y) {
                snake.setTail();
                mouse.draw();
            }
            Console::txtWrite({ 0, 21 }, 254, to_string(snake.getLength()));

            //Console::txtPlot(playerloc, 31);
            //_cprintf("Length: %i", length);


        }

        Sleep(10);
    }
}