#pragma once
#include "gameObject.h"
#include "Brick.h"
class Ball : public gameObject
{
private:
	int i_speed;
public:
	Ball(float x, float y, int radius, int directionX, int directionY);
	void move(float fDeltaTime);
	void Collision(Brick brique, sf::FloatRect ballBounds);
};

