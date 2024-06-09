#ifndef PIECE_H
#define PIECE_H
#include <string>

using namespace std;

class Piece
{
private:
	string sign;
	int col;
public:
	Piece(string);
	void makeMove(int);
	int getCol();
	string getSign();
};


#endif
