#include "Game.h"
Game* Game::t_instance = 0;

bool Game::init() {
	
	if (SDL_Init(SDL_INIT_EVERYTHING))
	{
		std::cout << "SDL Error " << SDL_GetError;
		return false;
	}

	window = SDL_CreateWindow("Pong!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 90, 90, SDL_WINDOW_RESIZABLE);	
	renderer = SDL_CreateRenderer(window, -1, NULL);

	SDL_SetRenderDrawColor(renderer, 200, 200, 0, 255);

	player1 = new Player(0, 50);

	running = true;
	return true;
}

void Game::update() {

	InputHandler::Instance()->update();
	player1->update();
}

void Game::render() {
	SDL_SetRenderDrawColor(renderer, 0, 200, 0, 250);
	SDL_RenderClear(renderer);
}

void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}