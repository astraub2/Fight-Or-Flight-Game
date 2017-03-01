#include "Game.hpp"
#include "Player.hpp"
#include <vector>
#include "PlayerMove.hpp"

Game::Game() {
	// TODO: include logic for creating the board
	board = std::vector< std::vector<Point> >;
	for (int i = 0; i < 15; i++) {
		board[i] = std::vector<Point>;
		for (int j = 0; j < 15; j++) {
			board[i][j] = Point(nullptr, i, j);
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
	//loop through player list, calling playMove() on each one
	//shove results into a vector of PlayerMoves
	//loop through this vector and do the specified move to the player, moving players before shooting
	//(loop through twice to handle this)
	//marks handled in the player functions
}