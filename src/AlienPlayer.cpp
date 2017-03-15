#include "AlienPlayer.hpp"

AlienPlayer::AlienPlayer(int x, int y) : x(x), y(y), ammo(0), shieldType(PlayerMove::NONE), movingTo(nullptr), markedForDeath(false), playerType(1) {
	// printf("AlienPlayer's x = %d\n", this->x);
	// printf("AlienPlayer's y = %d\n", this->y);
	// printf("AlienPlayer's type = %d\n", this->playerType);
}

AlienPlayer::~AlienPlayer() {

}

int AlienPlayer::getXPosition() {
	// printf("AlienPlayer::getXPosition() returning %d\n", this->x);
	return this->x;
}

int AlienPlayer::getYPosition() {
	// printf("AlienPlayer::getYPosition() returning %d\n", this->y);
	return this->y;
}

void AlienPlayer::setXPosition(int newX) {
	this->x = newX;
}

void AlienPlayer::setYPosition(int newY) {
	this->y = newY;
}
int AlienPlayer::getPlayerType() {
	// printf("AlienPlayer::getPlayerType() returning %d\n", this->playerType);
	return this->playerType;
}

int AlienPlayer::getAmmo() {
	return this->ammo;
}

Point* AlienPlayer::getMovingTo() {
	return this->movingTo;
}

PlayerMove::BulletOrShieldType AlienPlayer::getShieldType() {
	return this->shieldType;
}

void AlienPlayer::move(std::vector<Player*>* playerListPointer, int size) {
	//Move needs to: Move the player. PlayMove will set the movingTo marker.
	//Move needs to check the point being moved to and make sure no other player is moving onto that point.
	int movingToX = (*movingTo).getX();
	int movingToY = (*movingTo).getY();
	std::vector<Player*> playerList = *playerListPointer;

	for (int k = 0; k < playerList.size(); k++) {
		if (playerList[k]->getXPosition() == movingToX && playerList[k]->getYPosition() == movingToY) { // if there's someone on the point
			if (playerList[k]->getMovingTo() != movingTo || playerList[k]->getMovingTo() != nullptr) { // and they're not moving
				return; // we can't move there. Stop.
			}
		}

		if (playerList[k]->getMovingTo() == movingTo && playerList[k] != this) { // if someone else is moving to the point and it's not us
			return; // we can't move there. Stop.
		}
	}
	//Otherwise -- set location.
	setXPosition(movingToX);
	setYPosition(movingToY);
}

void AlienPlayer::shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletOrShieldType, std::vector<Player*>* playerListPointer, int size) {
	//Shoot needs to: Check all tiles in the direction decided by (xOffset, yOffset).
	//If a player is found, and their shield is of the wrong type for the bullet (i.e. not the same)
		//then mark that player for death
		//if plasma bullet, continue, otherwise stop
	//if their shield is of the correct type, stop with no effect.

	int currentX = this->x;
	int currentY = this->y;
	bool stillGoing = true;

	 //If you don't have enough ammo, explode.
	
	if (bulletOrShieldType == PlayerMove::METAL) {
		if (ammo >= 1) {
			ammo -= 1;	
		} else {
			setMarkedForDeath(true);
			return;
		}

	} else if (bulletOrShieldType == PlayerMove::PLASMA) {
		if (ammo >= 2) {
			ammo -= 2;
		} else {
			setMarkedForDeath(true);
			return;
		}
	}

	while ((currentX >= 0 || currentX < size || currentY >= 0 || currentY < size) && stillGoing) { // while we're still looking at a point on the board
		currentX += xOffset;
		currentY += yOffset; //move the pointer to the next point
			
		//loop through player list
		//check if they're on the correct point
		//remaining logic	
		std::vector<Player*> playerList = *playerListPointer;

		for (int i = 0; i < playerList.size(); i++) {
			if (playerList[i] != this) {// if the player is not us
				if ((playerList[i])->getShieldType() != bulletOrShieldType) {
					(playerList[i])->setMarkedForDeath(true);
					if (bulletOrShieldType != PlayerMove::PLASMA) {
						stillGoing = false;
					}
				} else {
					stillGoing = false;
				}	
			}
		}
	}
	return;
}

void AlienPlayer::shield(PlayerMove::BulletOrShieldType shieldType) {
	AlienPlayer::shieldType = shieldType;
}

void AlienPlayer::reload() {
	if (ammo < 9) {
		ammo += 1;
	}
}

void AlienPlayer::resetShieldType() {
	AlienPlayer::shieldType = PlayerMove::NONE;
}

void AlienPlayer::resetMovingTo(Point*** pointListPointer) {
	movingTo = &(*pointListPointer)[x][y];
} 

void AlienPlayer::setMarkedForDeath(bool mark) {
	AlienPlayer::markedForDeath = mark;
}

bool AlienPlayer::getMarkedForDeath() {
	return this->markedForDeath;
}

PlayerMove AlienPlayer::playMove(PlayerMove humanPlayerMove, Point*** pointListPointer, int size, int index) {
	//Temporary: this will be changed later
	return PlayerMove(PlayerMove::SHIELD, PlayerMove::PLASMA, 0, 0, index);
}