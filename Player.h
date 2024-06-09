#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
private:
	string sign;
public:
	Player(string);
	Player();
	string getSign();
	void setSign(string);
};



#endif
