// pong!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"

int main(int argc, char* args[])
{

    if (Game::Instance()->init())
        std::cout << "Lets play Pong!\n";

    while (Game::Instance()->getState()) {
        Game::Instance()->update();
        Game::Instance()->render();
    }

    Game::Instance()->clean();

    SDL_Quit();
    return 1;
}

