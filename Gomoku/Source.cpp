#include <iostream>
#include "ChessGame.h"

int main(void) {
	Human human;
	AI ai;
	Chess chess(12, 44, 43, 67); //int boardSize, int margin_x, int margin_y, float chessSize
	ChessGame game(&human, &ai, &chess);

	game.start();

	return 0;
}