/*
 * Game.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include <vector>

class PlayerMove {
public:
	enum BulletOrShieldType {
		METAL,
		PlASMA,
		NONE
	};
	enum PlayerMoveType {
		MOVE,
		SHOOT,
		SHIELD,
		RELOAD
	};
	PlayerMove(PlayerMoveType playerMove, BulletOrShieldType bulletOrShieldType, int xOffset, int yOffset/*, Player* movingPlayer*/);
	~PlayerMove();
	PlayerMoveType getPlayerMove();
	BulletOrShieldType getBulletOrShieldType();
	int getXOffset();
	int getYOffset();
	//Player* getMovingPlayer();
	
	void setPlayerMove(PlayerMoveType moveType);
	void setBulletOrShieldType(BulletOrShieldType type);
	void setXOffset(int newOffset);
	void setYOffset(int newOffset);

private:
	//Player* movingPlayer;
	PlayerMoveType playerMove;
	BulletOrShieldType bulletOrShieldType;
	int xOffset;
	int yOffset;
}; 

class Point {
public:
	Point(/*Player* player, */int x, int y);
	~Point();
	//Player* getPlayer();
	//void setPlayer(Player* setPlayer);
	int getX();
	int getY();
	void setX(int newX);
	void setY(int newY);

private:
	//Player* player;
	int x;
	int y;
};

class Player {
public:
	Player(int x, int y/*, Game game*/);
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
	//Game game;
	virtual void setXPosition(int newX);
	virtual void setYPosition(int newY);
	int x;
	int y;
	int ammo;
	Point* movingTo; 
	bool markedForDeath;
}; 

class HumanPlayer : public Player {
public:
	HumanPlayer(int x, int y);
	virtual ~HumanPlayer();
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

	virtual void playMove(PlayerMove humanPlayerMove);

	virtual Point* getMovingTo();

private:
	PlayerMove::BulletOrShieldType shieldType;
	virtual void setXPosition(int newX);
	virtual void setYPosition(int newY);
	int x;
	int y;
	int ammo;
	Point* movingTo;
	bool markedForDeath;
};

class Game {
public:
	Game();
	~Game();
	int getSize();
	void playRound(PlayerMove humanPlayerMove);
	Point* getPoint(int x, int y);
	std::vector<Player>* getPlayerList();

private:
	std::vector< std::vector<Point> > board;
	std::vector<Player> playerList;
	int size;
	int numPlayers;
};



#endif /* GAME_HPP_ */
