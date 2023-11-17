#pragma once
#include "gameObject.h"
#include "Brick.h"
class Ball : public gameObject
{
private:
	float f_speed;
public:
	Ball(float x, float y, int radius, int directionX, int directionY);
	void move(float fDeltaTime);
	std::vector<Brick*> collision(Brick* brique, sf::FloatRect ballBounds, std::vector<Brick*> colBricks);
	void bounce(Brick* brique);
	void changePos(int x, int y);
};

