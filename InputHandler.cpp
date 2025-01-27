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