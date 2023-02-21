#include "Chess.h"

Chess::Chess(int boardSize, int margin_x, int margin_y, float chessSize)
{
	this->boardSize = boardSize;
	this->margin_x = margin_x;
	this->margin_y = margin_y;
	this->chessSize = chessSize;
	for (int i = 0; i < boardSize; i++) {
		vector<int> row;
		for (int j = 0; j < boardSize; j++) {
			row.push_back(0);
		}
		chessMap.push_back(row);
	}
}

void Chess::init()
{
}

bool Chess::clickBoard(int x, int y, ChessPos* pos)
{
	return false;
}

void Chess::chessDown(ChessPos* pos, chess_type type)
{
}

int Chess::getBoardSize()
{
	return 0;
}

int Chess::getChessData(ChessPos* pos)
{
	return 0;
}

int Chess::getChessData(int row, int col)
{
	return 0;
}

bool Chess::checkGameOver()
{
	return false;
}
