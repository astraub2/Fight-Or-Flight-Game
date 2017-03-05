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
}

Game::~Game() {
	//Deallocate vectors?
}

int Game::getSize() {
	return this->size;
}

void Game::playRound() {
	//TODO:
	//loop through player list, calling playMove() on each one
	//shove results into a vector of PlayerMoves
	//loop through this vector and do the specified move to the player, moving players before shooting
	//(loop through twice to handle this)
	//marks handled in the player functions
	//kill all players marked for death
	//reset shieldType, movingTo at the end
}

Point* Game::getPoint(int x, int y) {
	return &(board[x][y]);
}
