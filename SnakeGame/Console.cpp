#include "Console.h"
#include <Windows.h>
#include "Point.h"
#include <conio.h>


void Console::gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    return;
}

void Console::setcolor(WORD color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return;
}

void Console::txtPlot(point item, unsigned char Color)
{
    setcolor(Color);
    gotoxy(item.x * 2, item.y);
    _cprintf("  ");
}

void Console::txtWrite(point item, unsigned char Color, std::string textInput)
{
    setcolor(Color);
    gotoxy(item.x, item.y);
    _cprintf("%s", textInput.c_str());
}