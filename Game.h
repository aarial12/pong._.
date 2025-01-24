#pragma once
#include <iostream>
#include "SDL.h"
#include "InputHandler.h"
#include "Player.h"

class Game
{

public:
		
	bool init();
	void render();
	void update();
	void clean();
	bool getState() { return running; }
	void quit() { running = false; }
	
	static Game* Instance() {
		if (t_instance == nullptr) {
			t_instance = new Game();
		}
		return t_instance;
	}

private:

	static Game* t_instance;

	Player* player1;
	Player* player2;

	
	SDL_Window* window;
	SDL_Window* player_w;
	SDL_Renderer* renderer;
	bool running;

};

