#include "Canon.h"
#include "Ball.h"
Cannon::Cannon(float x, float y, int width, int height, int directionX, int directionY) :gameObject(x, y, width, height, directionX, directionY) 
{

	i_rotation = 1;
}

void Cannon::rotation(sf::RenderWindow& window) {
	sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

	// Calcul de l'angle entre le canon et la position de la souris
	shape->setOrigin(10.f, 30.f);
	float angle = atan2(mousePosition.y - shape->getPosition().y, mousePosition.x - shape->getPosition().x);
	angle = angle * 180 / 3.14159 +90; // Conversion en degrés
	float pastAngle = angle;
	angle = fmin(75, fmax(-75, angle));

	if (pastAngle == angle)
	{
		shape->setRotation(angle); // Rotation du canon
	}
}

void Cannon::tire(sf::RenderWindow& window, Ball* oBall) {

	sf::Vector2i position = sf::Mouse::getPosition(window);
	this->mousePosition = { position.x * 1 , position.y * 1 };
	std::vector<float> ballPos = oBall->getPos();
	if (ballPos[0] == 305 && ballPos[1] == 415) {
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			oBall->setDirection(mousePosition.x - oBall->getPos()[0], mousePosition.y - oBall->getPos()[1]);
		}
	}
	
}