#pragma once
#include "gameObject.h"
class Brick : public gameObject
{
private:
	int i_life;

public:
	Brick(float x, float y, int width, int height, int directionX, int directionY);
	void takeDamage();
	int getLife();
	~Brick();
};

