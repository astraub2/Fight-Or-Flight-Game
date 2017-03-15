/*
 * PlayerMove.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef PLAYERMOVE_HPP_
#define PLAYERMOVE_HPP_

#include <iostream>

class PlayerMove {
public:
	enum BulletOrShieldType {
		METAL,
		PLASMA,
		NONE
	};
	enum PlayerMoveType {
		MOVE,
		SHOOT,
		SHIELD,
		RELOAD
	};
	PlayerMove(PlayerMoveType playerMove, BulletOrShieldType bulletOrShieldType, int xOffset, int yOffset, int movingPlayer);
	~PlayerMove();
	PlayerMoveType getPlayerMove();
	BulletOrShieldType getBulletOrShieldType();
	int getXOffset();
	int getYOffset();
	int getMovingPlayer();
	
	void setPlayerMove(PlayerMoveType moveType);
	void setBulletOrShieldType(BulletOrShieldType type);
	void setXOffset(int newOffset);
	void setYOffset(int newOffset);

private:
	int movingPlayer;
	PlayerMoveType playerMove;
	BulletOrShieldType bulletOrShieldType;
	int xOffset;
	int yOffset;
}; 



#endif /* PLAYERMOVE_HPP_ */
