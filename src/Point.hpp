/*
 * Point.hpp
 *
 *  Created on: Feb 28, 2017
 *      Author: sean
 */

#ifndef POINT_HPP_
#define POINT_HPP_

#include "Player.hpp"

class Point {
public:
	Point();
	~Point();
	Player* getPlayer();
	void setPlayer(Player* setPlayer);
	int getX();
	int getY();
	void setX(int newX);
	void setY(int newY);

private:
	Player* player;
	int x;
	int y;
};

 #endif /* POINT_HPP_ */