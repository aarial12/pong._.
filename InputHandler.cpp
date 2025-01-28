#include "InputHandler.h"
#include "Game.h"
#include "Player.h"

InputHandler* InputHandler::t_instance = 0;

void InputHandler::update() {

	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_KEYDOWN) {
			if (event.key.keysym.sym == SDLK_ESCAPE) {
				Game::Instance()->quit();
			}
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				

			default:
				break;
			}
		}
		
	}
}

bool InputHandler::up(int p_ID) {
	if (SDL_PollEvent(&event)) {
		if (p_ID == 1) {
			if (event.key.keysym.sym == SDLK_w) {
				return true;
			}
		}
		else {
			if (event.key.keysym.sym == SDLK_UP) {
				return true;
			}
		}
		return false;
	}
	return false;
}

bool InputHandler::down(int p_ID) {
	if (SDL_PollEvent(&event)) {
		if (p_ID == 1) {
			if (event.key.keysym.sym == SDLK_s) {
				return true;
			}
		}
		else {
			if (event.key.keysym.sym == SDLK_DOWN) {
				return true;
			}
		}
		return false;
	}
	return false;
}

