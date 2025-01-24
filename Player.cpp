#include "Player.h"
#include "InputHandler.h"

Player::Player(int p_x, int p_y) {
	x = p_x;
	y = p_x;
	player_w = SDL_CreateWindow("Player", x, y, 100, 300, NULL);
}

void Player::update() {
	if ((y + heigth) <= 1080) {
		y += 1;
		SDL_SetWindowPosition(player_w, x, y);
	}else {
		y -= 1;  
		SDL_SetWindowPosition(player_w, x, y);
	}
}

void Player::handleInput() {
	InputHandler::Instance()->update();
}
