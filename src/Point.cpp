#include "Point.hpp"

Point::Point(int x, int y) : x(x), y(y) {

}

Point::~Point(){}

int Point::getX() {
	return this->x;
}
int Point::getY() {
	return this->y;
}
void Point::setX(int newX) {
	x = newX;
}
void Point::setY(int newY) {
	y = newY;
}