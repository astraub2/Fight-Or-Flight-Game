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
	HumanPlayer(int x, int y, Game* game);
	virtual ~HumanPlayer();
	virtual int getXPosition();
	virtual int getYPosition();
	virtual int getAmmo();

	virtual void move(int xOffset, int yOffset);
	virtual void shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletType); // bulletType: 0 = metal bullet, 1 = plasma beam
	virtual void shield(PlayerMove::BulletOrShieldType shieldType); // shieldType: 0 = metal shield, 1 = thermionic reflector
	virtual void reload();

	virtual void resetShieldType();

	virtual void setMarkedForDeath(bool mark);

	virtual PlayerMove playMove();

private:
	PlayerMove::BulletOrShieldType shieldType;
	Game* game;
	virtual void setXPosition(int newX);
	virtual void setYPosition(int newY);
	int x;
	int y;
	int ammo;
	Point* movingTo;
	bool markedForDeath;
};



#endif /* HUMANPLAYER_HPP_ */
