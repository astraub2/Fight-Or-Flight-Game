#include "HumanPlayer.hpp"
#include "PlayerMove.hpp"

HumanPlayer::HumanPlayer(int x, int y, Game game) : x(x), y(y), ammo(0), shieldType(PlayerMove::NONE), game(game),
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

void HumanPlayer::setXPosition(int newX) {
	this->x = newX;
}

void HumanPlayer::setYPosition(int newY) {
	this->y = newY;
}

int HumanPlayer::getAmmo() {
	return this->ammo;
}

Point* HumanPlayer::getMovingTo() {
	return this->movingTo;
}

void HumanPlayer::move() {
	//TODO
	//Move needs to: Move the player. PlayMove will set the movingTo marker.
	//Move needs to check the point being moved to and make sure no other player is moving onto that point.
	Player* pointPlayer = movingTo.getPlayer();
	if (pointPlayer != nullptr) {
		if ((*pointPlayer).getMovingTo() != nullptr){
			return;
		}
	}

	movingToX = (*movingTo).getX();
	movingToY = (*movingTo).getY();

	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (i == 0 && j == 0) {
				continue;
			} else if (game.getPoint(movingToX + i , movingToY + j)) {
				
			}
		}
	}
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
