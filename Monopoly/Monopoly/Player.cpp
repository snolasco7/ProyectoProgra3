#include "Player.h"



Player::Player()
{
}

Player::Player(string PName, int PFunds, int PPos,string token_name)
{
	name = PName;
	money = PFunds;
	position = PPos;
	boot.loadFromFile("assets/tokens/"+token_name+".png");
	token.setTexture(boot);
}

Player::~Player()
{
}
