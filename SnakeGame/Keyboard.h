#pragma once
#include <conio.h>
#include "KeyCommand.h"

#define key_UP 72
#define key_DOWN 80
#define key_LEFT 75
#define key_RIGHT 77
#define key_ESCAPE 27

class Keyboard
{
private:
    KeyCommand direction;
public:
    KeyCommand keyPressed() {
        if (_kbhit())
        {
            char keypress = _getch();
            switch (keypress)
            {
            case key_LEFT:
                direction = KeyCommand::LEFT;
                break;

            case key_RIGHT:
                direction = KeyCommand::RIGHT;
                break;

            case key_UP:
                direction = KeyCommand::UP;
                break;

            case key_DOWN:
                direction = KeyCommand::DOWN;
                break;
             
            case key_ESCAPE:
                direction = KeyCommand::QUIT;
                break;

            default:
                direction = KeyCommand::NONE;
                break;
            }
        }
        return direction;
    }
};

