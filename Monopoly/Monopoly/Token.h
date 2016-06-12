#pragma once
#include <String>
#include <SFML/Graphics.hpp>

using namespace std;

class Token
{
public:
	string name;
	sf::Texture texture;
	sf::Sprite sprite;
	Token();
	~Token();
};

