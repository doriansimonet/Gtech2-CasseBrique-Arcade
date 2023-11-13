#pragma once
#include "gameObject.h"
class Cannon : public gameObject
{
private:
	int i_rotation;

public:
	Cannon(float x, float y, int width, int height, int directionX, int directionY);
	void rotation(sf::RenderWindow& window);
};

