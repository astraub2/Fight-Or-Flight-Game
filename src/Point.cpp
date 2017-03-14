#include "Game.hpp"

Point::Point(Player* player, int x, int y) : player(player), x(x), y(y) {

}

Point::~Point(){}

Player* Point::getPlayer() {
	return this->player;
}

void Point::setPlayer(Player* setPlayer) {
	player = setPlayer;
}

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