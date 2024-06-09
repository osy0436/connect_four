#include "Piece.h"
#ifndef BOARD_H
#define BOARD_H


class Board
{
private:
	string board[6][7];
	int slots = 42;
	int player = 1;
public:
	Board();
	void display();
	bool placePiece(Piece,int);
	bool checkVert(string);
	bool checkHoriz(string);
	bool checkDiag1(string);
	bool checkDiag2(string);
	bool drawCondition();
	string getPiece(int, int);
	void explode();
	int getNumPieceCol(int);

};


#endif