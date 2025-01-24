#pragma once
#include "SDL.h"
#include "Player.h"

class InputHandler
{

public:

	void update();
	static InputHandler* Instance() {
		if (t_instance == nullptr) {
			t_instance = new InputHandler;
		}
		return t_instance;
	}

private:

	static InputHandler* t_instance;
	SDL_Event event;

};

