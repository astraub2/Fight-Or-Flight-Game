#include "HumanPlayer.hpp"
#include "PlayerMove.hpp"

HumanPlayer::HumanPlayer(int x, int y, Game* game) : x(x), y(y), ammo(0), shieldType(PlayerMove::NONE), game(game),
movingTo(nullptr), markedForDeath(false) {

}

HumanPlayer::~HumanPlayer() {

}

int HumanPlayer::getXPosition() {
	return this->x;
}

int HumanPlayer::getYPosition() {
	return this->y;
}

int HumanPlayer::getAmmo() {
	return this->ammo;
}

void HumanPlayer::move(int xOffset, int yOffset) {
	//TODO
	//Move needs to: Move the player. PlayMove will set the movingTo marker.
	//Move needs to check the point being moved to and make sure no other player is moving onto that point.
}

void HumanPlayer::shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletOrShieldType) {
	//TODO
	//Shoot needs to: Check all tiles in the direction decided by (xOffset, yOffset).
	//If a player is found, and their shield is of the wrong type for the bullet (i.e. not the same)
		//then mark that player for death
		//if plasma bullet, continue, otherwise stop
	//if their shield is of the correct type, stop with no effect.
}

void HumanPlayer::shield(PlayerMove::BulletOrShieldType shieldType) {
	HumanPlayer::shieldType = shieldType;
}

void HumanPlayer::reload() {
	ammo += 1;
}

void HumanPlayer::resetShieldType() {
	HumanPlayer::shieldType = PlayerMove::NONE;
}

void HumanPlayer::setMarkedForDeath(bool mark) {
	HumanPlayer::markedForDeath = mark;
}

PlayerMove HumanPlayer::playMove() {
	//TODO O_O
}
