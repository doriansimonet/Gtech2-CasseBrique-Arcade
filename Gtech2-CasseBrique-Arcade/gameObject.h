#pragma once
#include <SFML/Graphics.hpp>
class gameObject
{
private:
	int i_positionX;
	int i_positionY;
	int i_width;
	int i_height;
	sf::RectangleShape oRectangle;

public:
	gameObject(int x, int y, int width, int height);


};

