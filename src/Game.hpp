/*
 * Game.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include "Player.hpp"
#include "PlayerMove.hpp"
#include "Point.hpp"
#include <vector>

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
