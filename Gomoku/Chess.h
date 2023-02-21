#pragma once
#include <vector>
using namespace std;

struct ChessPos {
	int row;
	int col;
};

typedef enum {
	chess_white = -1,
	chess_black = 1
}chess_type;

class Chess
{
public:
	Chess(int boardSize, int margin_x, int margin_y, float chessSize);
	void init();
	bool clickBoard(int x, int y, ChessPos* pos);
	void chessDown(ChessPos* pos, chess_type type);
	int getBoardSize();
	int getChessData(ChessPos* pos);
	int getChessData(int row, int col);
	bool checkGameOver();

private:
	int boardSize;
	int margin_x;
	int margin_y;
	float chessSize;
	vector<vector<int>> chessMap; // 当前棋局状态
	bool playerFlag; // 轮到谁下子
};

