//This is a frameword to allow you to focus on the game logic.
//Most of your code will go in three locations. 
//Function decalrations, game logic in runGame, and the function declarations.

#include "GameRunner.h"

using namespace std;

int main() {

    //Uncomment the next four lines to see console color options 0-255
    /*for (int i = 0; i < 16; i++) {
        int c = i * 16;
        Console::txtWrite({ 0,i }, c, "color" + to_string(c));
    }*/

    GameRunner game(0.3);
    game.runGame();
	return 0;
}