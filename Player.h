#pragma once
#include "SDL.h"

class Player
{

public:
	Player(int p_x, int p_y, int ID);
	void update();
	void handleInput();
	void move();

	void setX(int s_x) { x = s_x; }
	void setY(int s_y) { y = s_y; }
	int getX(int s_x) { return x; }
	int getY(int s_y) { return y; }

	int x, y;

private:

	int ID;
	SDL_Window* player_w;
};

