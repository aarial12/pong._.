#pragma once
#include "SDL.h"
#include "Player.h"

const int PLAYER_HEIGT = 300;
const int PLAYER_WIDTH = 100;

class InputHandler
{

public:

	void update();
	bool up(int p_ID);
	bool down(int p_ID);

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

