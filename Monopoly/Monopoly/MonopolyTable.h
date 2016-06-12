#pragma once
#include <String>
#include "Property.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

using namespace std;

class MonopolyTable
{
public:
	vector<Player>players;
	MonopolyTable();
	int RollDice();
	~MonopolyTable();
};

void UpdateBoard();


