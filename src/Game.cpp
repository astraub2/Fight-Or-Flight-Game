#include "Game.hpp"
#include "Player.hpp"
#include <vector>
#include "PlayerMove.hpp"

Game::Game() : size(15) {
	// TODO: include logic for creating the board
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			Player* nullPlayer = nullptr;
			board[i][j] = Point(nullPlayer, i, j);
		}
	}

	// TODO: include logic for creating the player list
	// requires having some players created
	// random placement
	// Human player must always be first in this list
}

Game::~Game() {
	//Deallocate vectors?
}

int Game::getSize() {
	return this->size;
}

std::vector<Player>* Game::getPlayerList() {
	return &(this->playerList);
}

void Game::playRound(PlayerMove humanPlayerMove) {
	//TODO:
	//loop through player list, calling playMove() on each one
	std::vector<PlayerMove> playerMoves;
	playerList[0].playMove(humanPlayerMove)
	playerMoves.push_back(humanPlayerMove);
	for (int i = 1; i < numPlayers; i++) {
		playerMoves.push_back(playerList[i].playMove());
	}
	//shove results into a vector of PlayerMoves
	//loop through this vector and do the specified move to the player, moving players before shooting
	int numMoves = playerMoves.size();
	for (int i = 0; i < numMoves; i++) {
		switch (playerMoves[i].getPlayerMove())  {
			case PlayerMove::SHOOT:
				break;

			case PlayerMove::MOVE:
				*(playerMoves[i].getMovingPlayer()).move();
				break;

			case PlayerMove::SHIELD:
				*(playerMoves[i].getMovingPlayer()).shield(playerMoves[i].getBulletOrShieldType());
				break;

			case PlayerMove::RELOAD:
				*(playerMoves[i].getMovingPlayer()).reload();
				break;
		}
	}
	//(loop through twice to handle this)
	for (int i = 0; i < numMoves; i++) {
		switch (playerMoves[i].getPlayerMove())  {
			case PlayerMove::SHOOT:
				*(playerMoves[i].getMovingPlayer()).shoot(playerMoves[i].getXOffset(), playerMoves[i].getYOffset(), playerMoves[i].getBulletOrShieldType());
				break;
			default: break;
		}
	}
	//marks handled in the player functions
	//kill all players marked for death
	//reset shieldType, movingTo at the end
}

Point* Game::getPoint(int x, int y) {
	return &(board[x][y]);
}
