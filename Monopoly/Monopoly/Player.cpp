#include "Player.h"



Player::Player()
{
}

Player::Player(string PName, int PFunds, int PPos)
{
	name = PName;
	money = PFunds;
	position = PPos;
	boot.loadFromFile("assets/tokens/token_boot.png");
	token.setTexture(boot);
}

Player::~Player()
{
}
