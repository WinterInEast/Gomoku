#pragma once
#include "Human.h"
#include "AI.h"
#include "Chess.h"

class ChessGame
{
public:
	ChessGame(Human* human, AI* ai, Chess* chess);
	void start();

//数据成员
private:
	Human* human;
	AI* ai;
	Chess* chess;
};

