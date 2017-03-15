#include "Player.hpp"

Player::Player() { 
}

Player::~Player() {

}

int Player::getXPosition() {
}

int Player::getYPosition() {
}
int Player::getPlayerType() {
}

void Player::setXPosition(int newX) {
}

void Player::setYPosition(int newY) {
}

int Player::getAmmo() {
}

Point* Player::getMovingTo() {
}

PlayerMove::BulletOrShieldType Player::getShieldType() {
}

void Player::move(std::vector<Player*>* playerListPointer, int size) {
}

void Player::shoot(int xOffset, int yOffset, PlayerMove::BulletOrShieldType bulletOrShieldType, std::vector<Player*>* playerListPointer, int size) {
}

void Player::shield(PlayerMove::BulletOrShieldType shieldType) {

}

void Player::reload() {
}

void Player::resetShieldType() {
}

void Player::resetMovingTo(Point*** pointListPointer) {
} 

void Player::setMarkedForDeath(bool mark) {
}

bool Player::getMarkedForDeath() {
}

PlayerMove Player::playMove(PlayerMove humanPlayerMove, Point*** pointListPointer, int size, int index) {
}