/*
 * Point.hpp
 *
 *  Created on: Feb 28, 2017
 *      Author: sean
 */

#ifndef POINT_HPP_
#define POINT_HPP_
 
class Point {
public:
	Point(int x, int y);
	~Point();
	int getX();
	int getY();
	void setX(int newX);
	void setY(int newY);

private:
	int x;
	int y;
};

#endif /* POINT_HPP_ */