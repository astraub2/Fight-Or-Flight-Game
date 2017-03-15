/*
 * HumanPlayer.hpp
 *
 *  Created on: Mar 2, 2017
 *      Author: sean
 */

#ifndef HUMANPLAYER_HPP_
#define HUMANPLAYER_HPP_

#include "Player.hpp"

class HumanPlayer : public Player {
public:
	HumanPlayer(int x, int y);
	virtual ~HumanPlayer();
	int getXPosition();
	int getYPosition();
	int getAmmo();
	PlayerMove::BulletOrShieldType getShieldType();

	void move(std::vector<Player*>* playerListPointer, int size);
	void shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletType, std::vector<Player*>* playerListPointer, int size); // bulletType: 0 = metal bullet, 1 = plasma beam
	void shield(PlayerMove::BulletOrShieldType shieldType); // shieldType: 0 = metal shield, 1 = thermionic reflector
	void reload();

	void resetShieldType();
	void resetMovingTo(Point*** pointListPointer);

	void setMarkedForDeath(bool mark);
	bool getMarkedForDeath();

	PlayerMove playMove(PlayerMove humanPlayerMove, Point*** pointListPointer, int size, int index);

	Point* getMovingTo();

private:
	PlayerMove::BulletOrShieldType shieldType;
	void setXPosition(int newX);
	void setYPosition(int newY);
	int x;
	int y;
	int ammo;
	Point* movingTo;
	bool markedForDeath;
};



#endif /* HUMANPLAYER_HPP_ */
