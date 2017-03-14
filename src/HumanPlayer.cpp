#include "Game.hpp"

HumanPlayer::HumanPlayer(int x, int y) : x(x), y(y), ammo(0), shieldType(PlayerMove::NONE),
movingTo(nullptr), markedForDeath(false) {
	//TODO: Set point's player pointer to this instance
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

PlayerMove::BulletOrShieldType getShieldType() {
	return this->shieldType;
}

void HumanPlayer::move(std::vector<Player>* playerListPointer, int size) {
	//TODO
	//Move needs to: Move the player. PlayMove will set the movingTo marker.
	//Move needs to check the point being moved to and make sure no other player is moving onto that point.
	// Player* pointPlayer = (*movingTo).getPlayer();
	// if (pointPlayer != nullptr) { //if there's someone on the point
	// 	if ((*pointPlayer).getMovingTo() != nullptr){ //and they're not moving
	// 		return; //then stop
	// 	}
	// }

	int movingToX = (*movingTo).getX();
	int movingToY = (*movingTo).getY();
	std::vector<Player> playerList = *playerListPointer;

	for (int i = 0; i < playerList.size(); i++) {
		if (playerList[i].getXPosition() == movingToX && playerList[i].getYPosition() == movingToY) { //if there's someone on the point
			if (playerList[i].getMovingTo() != movingTo || playerList[i] != nullptr) {
				return;
			}
		}
	}

	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (i == 0 && j == 0) { // don't check current location
	 			continue;
			} else if (movingToX + i < 0 || movingToX + i > size - 1 || movingToY + j < 0 || movingToY + j > size - 1) { // don't check off the board
				continue;
	 		} else if (/*(*(game.getPoint(movingToX + i , movingToY + j))).getPlayer() != nullptr)*/ { // if there's a player on a surrounding spot
	 			/*if ((*(game.getPoint(movingToX + i, movingToY + j))).getPlayer() != this) { // and it's not equal to ourself
	 				if ((*(*(game.getPoint(movingToX + i, movingToY + j))).getPlayer()).getMovingTo() == movingTo) { // and they're moving to the same spot as we are
	 					return; // then stop. We can't move.
	 				}
	 			}*/
	 		}
		}
	}

	//Otherwise:
	//Set the current point's player pointer to nullptr
	//Set movingTo's player pointer to us
	//Set our x and y to movingTo's x and y
	//(*(game.getPoint(this->x, this->y))).setPlayer(nullptr);
	//(*movingTo).setPlayer(this);
	setXPosition(movingToX);
	setYPosition(movingToY);
}

void HumanPlayer::shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletOrShieldType, std::vector<Player>* playerListPointer, int size) {
	//TODO
	//Shoot needs to: Check all tiles in the direction decided by (xOffset, yOffset).
	//If a player is found, and their shield is of the wrong type for the bullet (i.e. not the same)
		//then mark that player for death
		//if plasma bullet, continue, otherwise stop
	//if their shield is of the correct type, stop with no effect.

	int currentX = this->x;
	int currentY = this->y;
	bool stillGoing = true;

	//TODO: Figure out what to do if you don't have enough ammo. Reload? Explode? Explode.
	
	if (bulletOrShieldType == PlayerMove::METAL) {
		if (ammo >= 1) {
			ammo -= 1;	
		} else {
			setMarkedForDeath(true);
		}

	} else if (bulletOrShieldType == PlayerMove::PLASMA >= 2) {
		if (ammo >= 2) {
			ammo -= 2;
		} else {
			setMarkedForDeath(true);
		}
	}

	while ((currentX >= 0 || currentX < size || currentY >= 0 || currentY < size) && stillGoing) { // while we're still looking at a point on the board
		currentX += xOffset;
		currentY += yOffset; //move the pointer to the next point
			
		//loop through player list
		//check if they're on the correct point
		//remaining logic	
		std::vector<Player> playerList = *playerListPointer;

		for (int i = 0; i < playerList.size(); i++) {
			if (playerList[i] != *this) {// if the player is not us
				if ((playerList[i]).getShieldType() != bulletOrShieldType) {
					(playerList[i]).setMarkedForDeath(true);
					if (bulletOrShieldType != PlayerMove::PLASMA) {
						stillGoing = false;
					}
				} else {
					stillGoing = false;
				}	
			}
		}
		
	}
}

void HumanPlayer::shield(PlayerMove::BulletOrShieldType shieldType) {
	HumanPlayer::shieldType = shieldType;
}

void HumanPlayer::reload() {
	if ammo < 9 {
		ammo += 1;
	}
}

void HumanPlayer::resetShieldType() {
	HumanPlayer::shieldType = PlayerMove::NONE;
}

void HumanPlayer::setMarkedForDeath(bool mark) {
	HumanPlayer::markedForDeath = mark;
}

void HumanPlayer::playMove(PlayerMove humanPlayerMove) {
	//TODO O_O
	int xOffset = humanPlayerMove.getXOffset();
	int yOffset = humanPlayerMove.getYOffset();
	if (x + xOffset > game.getSize() || x + xOffset < 0 || y + yOffset > game.getSize() || y + yOffset < 0) {
		Point* setMovingTo = game.getPoint(x, y);
	} else {
		Point* setMovingTo = game.getPoint(x + xOffset, y + yOffset);
	}
	movingTo = setMovingTo;
}
