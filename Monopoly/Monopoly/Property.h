#pragma once
#include <String>
#include <SFML/Graphics.hpp>
using namespace std;

class Property
{
public:
	string name;
	string color;
	int price;
	string status;
	string rent;
	Property();	
	
	~Property();
};

