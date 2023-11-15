#include "Brick.h"
#include "gameObject.h"
Brick::Brick(float x, float y, int width, int height, int directionX, int directionY):gameObject(x, y, width, height, directionX, directionY) {

	i_life = rand()%3+1;
	if (i_life == 1) {
		shape->setFillColor(sf::Color::Magenta);
	}
	else if (i_life == 2) {
		shape->setFillColor(sf::Color::Cyan);
	}
	else if (i_life ==3) {
		shape->setFillColor(sf::Color::Yellow);
	}
}

void Brick::takeDamage() {
	i_life -= 1;
	if (i_life == 2) {
		shape->setFillColor(sf::Color::Cyan);
	}
	else if (i_life == 1) {
		shape->setFillColor(sf::Color::Magenta);
	}
	else if (i_life == 0) {
		shape->setFillColor(sf::Color::Transparent);
	}    
}

int Brick::getLife() {
	return i_life;
}

Brick::~Brick() {}