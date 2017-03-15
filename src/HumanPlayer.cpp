#include "HumanPlayer.hpp"

HumanPlayer::HumanPlayer(int x, int y) : x(x), y(y), ammo(0), shieldType(PlayerMove::NONE), movingTo(nullptr), markedForDeath(false), playerType(0) {
	printf("HumanPlayer's x = %d\n", this->x);
	printf("HumanPlayer's y = %d\n", this->y);
	printf("HumanPlayer's type = %d\n", this->playerType);
}

HumanPlayer::~HumanPlayer() {

}

int HumanPlayer::getXPosition() {
	printf("HumanPlayer::getXPosition() returning %d\n", this->x);
	return this->x;
}

int HumanPlayer::getYPosition() {
	printf("HumanPlayer::getYPosition() returning %d\n", this->y);
	return this->y;
}
int HumanPlayer::getPlayerType() {
	printf("HumanPlayer::getPlayerType() returning %d\n", this->playerType);
	return this->playerType;
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

PlayerMove::BulletOrShieldType HumanPlayer::getShieldType() {
	return this->shieldType;
}

void HumanPlayer::move(std::vector<Player*>* playerListPointer, int size) {
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

void HumanPlayer::shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletOrShieldType, std::vector<Player*>* playerListPointer, int size) {
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

void HumanPlayer::shield(PlayerMove::BulletOrShieldType shieldType) {
	HumanPlayer::shieldType = shieldType;
}

void HumanPlayer::reload() {
	if (ammo < 9) {
		ammo += 1;
	}
}

void HumanPlayer::resetShieldType() {
	HumanPlayer::shieldType = PlayerMove::NONE;
}

void HumanPlayer::resetMovingTo(Point*** pointListPointer) {
	movingTo = &(*pointListPointer)[x][y];
} 

void HumanPlayer::setMarkedForDeath(bool mark) {
	HumanPlayer::markedForDeath = mark;
}

bool HumanPlayer::getMarkedForDeath() {
	return this->markedForDeath;
}

PlayerMove HumanPlayer::playMove(PlayerMove humanPlayerMove, Point*** pointListPointer, int size, int index) {
	//TODO O_O
	int xOffset = humanPlayerMove.getXOffset();
	int yOffset = humanPlayerMove.getYOffset();
	Point* setMovingTo;
	if (x + xOffset > size || x + xOffset < 0 || y + yOffset > size || y + yOffset < 0) {
		setMovingTo = &(*pointListPointer)[x][y];
	} else {
		setMovingTo = &(*pointListPointer)[x + xOffset][y + yOffset];
	}
	movingTo = setMovingTo;

	return humanPlayerMove;
}
