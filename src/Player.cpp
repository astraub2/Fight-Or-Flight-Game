#include "Player.hpp"

Player::Player() { 

}

Player::~Player() {

}

int Player::getXPosition() {
	return this->x;
}

int Player::getYPosition() {
	return this->y;
}

void Player::setXPosition(int newX) {
	this->x = newX;
}

void Player::setYPosition(int newY) {
	this->y = newY;
}

int Player::getAmmo() {
	return this->ammo;
}

Point* Player::getMovingTo() {
	return this->movingTo;
}

PlayerMove::BulletOrShieldType Player::getShieldType() {
	return this->shieldType;
}

void Player::move(std::vector<Player>* playerListPointer, int size) {
}

void Player::shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletOrShieldType, std::vector<Player>* playerListPointer, int size) {
}

void Player::shield(PlayerMove::BulletOrShieldType shieldType) {

}

void Player::reload() {
}

void Player::resetShieldType() {
}

void Player::resetMovingTo(std::vector< std::vector<Point> >* pointListPointer) {
} 

void Player::setMarkedForDeath(bool mark) {
}

bool Player::getMarkedForDeath() {
	return this->markedForDeath;
}

PlayerMove Player::playMove(PlayerMove humanPlayerMove, std::vector< std::vector<Point> >* pointListPointer, int size, int index) {
}