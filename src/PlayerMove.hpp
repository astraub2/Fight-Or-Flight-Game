/*
 * PlayerMove.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef PLAYERMOVE_HPP_
#define PLAYERMOVE_HPP_

#include "Player.hpp"

class PlayerMove {
public:
	enum BulletOrShieldType {
		METAL,
		PlASMA,
		NULL
	};
	enum PlayerMoveType {
			MOVE,
			SHOOT,
			SHIELD
	};
	PlayerMove(PlayerMoveType playerMove, BulletOrShieldType bulletOrShieldType, int xOffset, int yOffset, Player movingPlayer);
	~PlayerMove();
	PlayerMoveType getPlayerMove();
	BulletOrShieldType getBulletOrShieldType();
	int getXOffset();
	int getYOffset();

private:
	Player movingPlayer;
	PlayerMoveType playerMove;
	BulletOrShieldType bulletOrShieldType;
	int xOffset;
	int yOffset;
};



#endif /* PLAYERMOVE_HPP_ */
