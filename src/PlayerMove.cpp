#include "PlayerMove.hpp"

//Constructor and Destructor

PlayerMove::PlayerMove(PlayerMove::PlayerMoveType playerMove, PlayerMove::BulletOrShieldType bulletOrShieldType, int xOffset, int yOffset, int movingPlayer) : playerMove(playerMove),
	bulletOrShieldType(bulletOrShieldType), xOffset(xOffset), yOffset(yOffset), movingPlayer(movingPlayer){}

PlayerMove::~PlayerMove() {}

//Getters

PlayerMove::PlayerMoveType PlayerMove::getPlayerMove() {
	return this->playerMove;
}

PlayerMove::BulletOrShieldType PlayerMove::getBulletOrShieldType() { 
	return this->bulletOrShieldType;
}

int PlayerMove::getXOffset() {
	return this->xOffset;
}

int PlayerMove::getYOffset() {
	return this->yOffset;
}

int PlayerMove::getMovingPlayer() {
	return this->movingPlayer;
}

//Setters -- all the setters use a different argument name than the local variable name because
//originally I thought it'd make it easier.

void PlayerMove::setPlayerMove(PlayerMoveType moveType) {
	playerMove = moveType;
}

void PlayerMove::setBulletOrShieldType(BulletOrShieldType type) {
	bulletOrShieldType = type;
}

void PlayerMove::setXOffset(int newOffset) {
	xOffset = newOffset;
}

void PlayerMove::setYOffset(int newOffset) {
	yOffset = newOffset;
}