#include "Player.h"
#include "InputHandler.h"

Player::Player(int p_x, int p_y, int p_ID) {
	ID = p_ID;
	x = p_x;
	y = p_y;
	player_w = SDL_CreateWindow("Player", x, y, PLAYER_WIDTH, PLAYER_HEIGT, NULL);
}

void Player::update() {
	move();
}

void Player::handleInput() {
	InputHandler::Instance()->update();
}

void Player::move() {

	if (y >= 0 && InputHandler::Instance()->up(ID)) {
		y -= 12;
		SDL_SetWindowPosition(player_w, x, y);
	}
	else if (y < (1080 - PLAYER_HEIGT) && InputHandler::Instance()->down(ID)) {
		y += 12;
		SDL_SetWindowPosition(player_w, x, y);
	}
}