#include "MonopolyTable.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <cstdlib>

using namespace std;

sf::RenderWindow window(sf::VideoMode(1200, 750), "SFML Application");
sf::Texture texture,dice;
sf::Sprite sprite,sdice;
vector <Player> Players(6);
int num=0;
int t = 1;
bool P1 = false;
bool P2 = false;
bool P3 = false;
bool P3 = false;
bool P4 = false;
bool P5 = false;
bool P6 = false;

Player Player1("Checho",1500,0,"token_boot");
Player Player2("", 1500, 0, "token_boat");
Player Player3("", 1500, 0, "token_car");
Player Player4("", 1500, 0, "token_hat");
Player Player5("", 1500, 0, "token_iron");
Player Player6("", 1500, 0, "token_barrow");

Players[0] = Player1;
Players[1] = Player2;
Players[2] = Player3;
Players[3] = Player4;
Players[4] = Player5;
Players[5] = Player6;



MonopolyTable::MonopolyTable()
{
	window.setKeyRepeatEnabled(false);
	while (window.isOpen()) {
		sf::Event event;
		texture.loadFromFile("assets/table/table2.png");
		dice.loadFromFile("assets/table/dices.png");
		sprite.setTexture(texture);
		sdice.setTexture(dice);
		sprite.setPosition(0, 0);
		sdice.setPosition(900, 400);

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				window.close();
			}
			/*if (event.type == sf::Event::KeyPressed) {
				if (event.key.code = sf::Keyboard::M) {
					if (Player1.position == 39) {
						Player1.position = 0;
					}
					else {
						Player1.position += 1;
						//cout << Player1.position << endl;
					}
				}
			}*/

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code = sf::Keyboard::R) {
					if (Player1.position <= 39) {
						Player1.position = 0;
					}

					num = RollDice();
					Player1.position += num;
					cout << num << endl;
					cout << Player1.position << endl;
				}
			}

				UpdateBoard();

				window.clear();
				window.draw(sprite);
				window.draw(sdice);
				window.draw(Player1.token);
				window.draw(Player2.token);
				window.draw(Player3.token);
				window.draw(Player4.token);
				window.draw(Player5.token);
				window.draw(Player6.token);
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
	if (Player+t+.position == 0) {
		Player1.token.setPosition(680,660);
	}else if(Player1.position == 1){
		Player1.token.setPosition(595,660);
	}else if (Player1.position == 2) {
		Player1.token.setPosition(535, 660);
	}else if (Player1.position == 3) {
		Player1.token.setPosition(475, 660);
	}else if (Player1.position == 4) {
		Player1.token.setPosition(410, 660);
	}else if (Player1.position == 5) {
		Player1.token.setPosition(350, 660);
	}else if (Player1.position == 6) {
		Player1.token.setPosition(290, 660);
	}else if (Player1.position == 7) {
		Player1.token.setPosition(220, 660);
	}else if (Player1.position == 8) {
		Player1.token.setPosition(160, 660);
	}else if (Player1.position == 9) {
		Player1.token.setPosition(100, 660);
	}else if (Player1.position == 10) {
		Player1.token.setPosition(50, 680);
	}else if (Player1.position == 11) {
		Player1.token.setPosition(25, 590);
	}else if (Player1.position == 12) {
		Player1.token.setPosition(25, 520);
	}else if (Player1.position == 13) {
		Player1.token.setPosition(25, 460);
	}else if (Player1.position == 14) {
		Player1.token.setPosition(25, 400);
	}else if (Player1.position == 15) {
		Player1.token.setPosition(25, 340);
	}else if (Player1.position == 16) {
		Player1.token.setPosition(25, 280);
	}else if (Player1.position == 17) {
		Player1.token.setPosition(25, 220);
	}else if (Player1.position == 18) {
		Player1.token.setPosition(25, 160);
	}else if (Player1.position == 19) {
		Player1.token.setPosition(25, 100);
	}else if (Player1.position == 20) {
		Player1.token.setPosition(25, 25);
	}else if (Player1.position == 21) {
		Player1.token.setPosition(110, 25);
	}else if (Player1.position == 22) {
		Player1.token.setPosition(160, 25);
	}else if (Player1.position == 23) {
		Player1.token.setPosition(230, 25);
	}else if (Player1.position == 24) {
		Player1.token.setPosition(290, 25);
	}else if (Player1.position == 25) {
		Player1.token.setPosition(350, 25);
	}else if (Player1.position == 26) {
		Player1.token.setPosition(410, 25);
	}else if (Player1.position == 27) {
		Player1.token.setPosition(480, 25);
	}else if (Player1.position == 28) {
		Player1.token.setPosition(540, 25);
	}else if (Player1.position == 29) {
		Player1.token.setPosition(590, 25);
	}else if (Player1.position == 30) {
		Player1.token.setPosition(660, 25);
		Player1.position = 40;
	}else if (Player1.position == 31) {
		Player1.token.setPosition(690, 100);
	}else if (Player1.position == 32) {
		Player1.token.setPosition(690, 150);
	}else if (Player1.position == 33) {
		Player1.token.setPosition(690, 210);
	}else if (Player1.position == 34) {
		Player1.token.setPosition(690, 280);
	}else if (Player1.position == 35) {
		Player1.token.setPosition(690, 345);
	}else if (Player1.position == 36) {
		Player1.token.setPosition(690, 410);
	}else if (Player1.position == 37) {
		Player1.token.setPosition(690, 470);
	}else if (Player1.position == 38) {
		Player1.token.setPosition(690, 530);
	}else if (Player1.position == 39) {
		Player1.token.setPosition(690, 585);
	}else if (Player1.position == 40) {
		Player1.token.setPosition(35, 660);
	}
}
