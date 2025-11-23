#include <iostream>
#include "Game.h"

int main()
{
    std::cout << "Hello World!\n";
    Game* main_game = new Game();
    main_game->start();
    return 0;
}
