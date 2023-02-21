#include "ChessGame.h"

ChessGame::ChessGame(Human* human, AI* ai, Chess* chess)
{
	this->human = human;
	this->ai = ai;
	this->chess = chess;
}

void ChessGame::start()
{
	chess->init();
	while (1) {
		human->go();
		if (chess->checkGameOver()) {
			chess->init();
			continue;
		}

		ai->go();
		if (chess->checkGameOver()) {
			chess->init();
			continue;
		}

	}
}
