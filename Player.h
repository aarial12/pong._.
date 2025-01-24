#pragma once
#include "SDL.h"

class Player
{

public:
	Player(int p_x, int p_y);
	void update();
	void handleInput();

	void setX(int s_x) { x = s_x; }
	void setY(int s_y) { y = s_y; }
	int getX(int s_x) { return x; }
	int getY(int s_y) { return y; }

	int x, y;

public:

	int heigth = 300;
	int width = 100;
	SDL_Window* player_w;
};

