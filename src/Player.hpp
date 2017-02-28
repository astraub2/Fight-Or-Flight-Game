/*
 * Player.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "PlayerMove.hpp"

class Player {
public:
	Player();
	virtual ~Player();
	virtual int getXPosition();
	virtual int getYPosition();
	virtual int getAmmo();

	virtual void move(int xOffset, int yOffset);
	virtual void shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletType); // bulletType: 0 = metal bullet, 1 = plasma beam
	virtual void shield(PlayerMove::BulletOrShieldType shieldType); // shieldType: 0 = metal shield, 1 = thermionic reflector
	virtual void reload();

	virtual PlayerMove playMove();

private:
	virtual void setXPosition(int newX);
	virtual void setYPosition(int newY);
	int x;
	int y;
	int ammo;
};



#endif /* PLAYER_HPP_ */
