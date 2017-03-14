/*
 * Player.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "PlayerMove.hpp"
#include "Game.hpp"
#include "Point.hpp"

class Player {
public:
	Player(int x, int y, Game game);
	virtual ~Player();
	virtual int getXPosition();
	virtual int getYPosition();
	virtual int getAmmo();
	virtual PlayerMove::BulletOrShieldType getShieldType();

	virtual void move();
	virtual void shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletType); // bulletType: 0 = metal bullet, 1 = plasma beam
	virtual void shield(PlayerMove::BulletOrShieldType shieldType); // shieldType: 0 = metal shield, 1 = thermionic reflector
	virtual void reload();

	virtual void resetShieldType();

	virtual void setMarkedForDeath(bool mark);

	virtual PlayerMove playMove();

	virtual Point* getMovingTo();

	int playerType = 0; // Defines which graphic should be used for the player. Default 0 is HumanPlayer graphic

private:
	PlayerMove::BulletOrShieldType shieldType;
	Game game;
	virtual void setXPosition(int newX);
	virtual void setYPosition(int newY);
	int x;
	int y;
	int ammo;
	Point* movingTo;
	bool markedForDeath;
};



#endif /* PLAYER_HPP_ */
