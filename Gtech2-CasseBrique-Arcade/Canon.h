#pragma once
#include "gameObject.h"
#include "Ball.h"
class Cannon : public gameObject
{
private:
	int i_rotation;
	sf::Vector2i mousePosition;

public:
	Cannon(float x, float y, int width, int height, int directionX, int directionY);
	void rotation(sf::RenderWindow& window);
	void tire(sf::RenderWindow& window, Ball* oBall);
};

