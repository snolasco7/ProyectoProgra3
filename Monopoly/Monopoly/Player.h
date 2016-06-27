#pragma once
#include "Token.h"
#include "Property.h"
#include <SFML/Graphics.hpp>
#include <String>

using namespace std;
using namespace sf;

class Player
{
public:
	Player();
	Player(string PName, int PFunds, int PPos,string token_name);
	string name;
	string pieza;
	int money;
	int position = 0;
	Sprite token;
	Texture boot;
	Property properties[36];
	~Player();
};

