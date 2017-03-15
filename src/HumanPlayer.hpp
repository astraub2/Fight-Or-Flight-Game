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
	virtual int getXPosition();
	virtual int getYPosition();
	virtual int getAmmo();
	virtual PlayerMove::BulletOrShieldType getShieldType();

	virtual void move(std::vector<Player*>* playerListPointer, int size);
	virtual void shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletType, std::vector<Player*>* playerListPointer, int size); // bulletType: 0 = metal bullet, 1 = plasma beam
	virtual void shield(PlayerMove::BulletOrShieldType shieldType); // shieldType: 0 = metal shield, 1 = thermionic reflector
	virtual void reload();

	virtual void resetShieldType();
	virtual void resetMovingTo(Point*** pointListPointer);

	virtual void setMarkedForDeath(bool mark);
	virtual bool getMarkedForDeath();

	virtual PlayerMove playMove(PlayerMove humanPlayerMove, Point*** pointListPointer, int size, int index);

	virtual Point* getMovingTo();

	int playerType;

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
