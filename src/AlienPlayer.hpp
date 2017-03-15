/*
 * AlienPlayer.hpp
 *
 *  Created on: Mar 14, 2017
 *      Author: sean
 */

#ifndef ALIENPLAYER_HPP_
#define ALIENPLAYER_HPP_

#include "Player.hpp"

class AlienPlayer : public Player {
public:
	AlienPlayer(int x, int y);
	virtual ~AlienPlayer();
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

	int playerType = 1; // Defines which graphic should be used for the player. Default 0 is HumanPlayer graphic

private:
	PlayerMove::BulletOrShieldType shieldType;
	//Game game;
	virtual void setXPosition(int newX);
	virtual void setYPosition(int newY);
	int x;
	int y;
	int ammo;
	Point* movingTo; 
	bool markedForDeath;
};



#endif /* ALIENPLAYER_HPP_ */
