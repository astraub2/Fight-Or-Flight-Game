/*
 * Game.hpp
 *
 *  Created on: Feb 21, 2017
 *      Author: sean
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include "Player.hpp"
#include <vector>

class Game {
public:
	Game();
	~Game();
	int getSize();
	void playRound();

private:
	std::vector< std::vector<Player> > board;
	int size;
};



#endif /* GAME_HPP_ */