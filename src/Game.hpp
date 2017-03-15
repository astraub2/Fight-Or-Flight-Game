/*
 * Game.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include <vector> 
#include "HumanPlayer.hpp"
#include "AlienPlayer.hpp"
#include "CowboyPlayer.hpp"

class Game {
public:
	Game();
	~Game();
	int getSize();
	bool playRound(PlayerMove humanPlayerMove);
	Point* getPoint(int x, int y);
	std::vector<Player>* getPlayerList();

private:
	std::vector< std::vector<Point> > board;
	std::vector<Player> playerList;
	int size;
};



#endif /* GAME_HPP_ */
