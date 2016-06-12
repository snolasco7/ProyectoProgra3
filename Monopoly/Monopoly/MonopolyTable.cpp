#include "MonopolyTable.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <cstdlib>

using namespace std;

sf::RenderWindow window(sf::VideoMode(1200, 750), "SFML Application");
sf::Texture texture,boot,boat,car,hat,iron;
sf::Sprite sprite,sprite_boot,sprite_boat,sprite_car,sprite_hat,sprite_iron;

Player Player1("Checho", 1500, 0);

MonopolyTable::MonopolyTable()
{
	window.setKeyRepeatEnabled(false);
	while (window.isOpen()) {
		sf::Event event;
		texture.loadFromFile("assets/table/table2.png");
		boot.loadFromFile("assets/tokens/token_boot.png");
		boat.loadFromFile("assets/tokens/token_boat.png");
		sprite.setTexture(texture);
		sprite_boot.setTexture(boot);
		sprite_boat.setTexture(boat);
		sprite.setPosition(0, 0);
		sprite_boat.setPosition(750, 300);

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				window.close();
			}
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code = sf::Keyboard::M) {
					Player1.position += 1;
					cout << Player1.position << endl;
					
				}
				
				else if(event.key.code = sf::Keyboard::A){
					Player1.position -= 1;
					cout << Player1.position << endl;
				}
			}

			UpdateBoard();

			window.clear();
			window.draw(sprite);
			window.draw(Player1.token);
			window.display();
		}
	}
}

int MonopolyTable::RollDice() {
	int Dice1 = rand() % 6 + 1;
	int Dice2 = rand() % 6 + 1;
	int movement = Dice1 + Dice2;
	return movement;
}

MonopolyTable::~MonopolyTable()
{
}

void UpdateBoard() {
	if (Player1.position == 0) {
		Player1.token.setPosition(680,660);
	}else if(Player1.position == 1){
		Player1.token.setPosition(590,660);
	}else if (Player1.position == 2) {
		Player1.token.setPosition(540, 660);
	}else if (Player1.position == 3) {
		Player1.token.setPosition(490, 660);
	}else if (Player1.position == 4) {
		Player1.token.setPosition(440, 660);
	}else if (Player1.position == 5) {
		Player1.token.setPosition(390, 660);
	}else if (Player1.position == 6) {
		Player1.token.setPosition(340, 660);
	}else if (Player1.position == 7) {
		Player1.token.setPosition(290, 660);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 660);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}else if (Player1.position == 1) {
		Player1.token.setPosition(590, 680);
	}
}

