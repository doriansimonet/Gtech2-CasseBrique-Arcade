#include <iostream>
#include "gameObject.h"
gameObject::gameObject(float x, float y, int width, int height, int directionX, int directionY/*,char* color*/) {
	f_positionX = x;
	f_positionY = y;
	i_width = width;
	i_height = height;

	//c_color = sf::Color::color;
	f_direction.resize(2);
	f_direction[0] = directionX;
	f_direction[1] = directionY;
	shape = new sf::RectangleShape(sf::Vector2f(i_width, i_height));
	shape->setPosition(f_positionX, f_positionY);
	shape->setFillColor(sf::Color::Red);
	/*if (radius == 0) {
		oRectangle = sf::RectangleShape(sf::Vector2f(i_width, i_height));
		oRectangle.setPosition(i_positionX, i_positionY);
		oRectangle.setFillColor(sf::Color::Red);
	}
	else {
		oCircle = sf::CircleShape(i_radius);
		oCircle.setPosition(i_positionX, i_positionY);
		oCircle.setFillColor(sf::Color::Red);
	}*/
}
gameObject::gameObject(float x, float y, int radius, int directionX, int directionY/*,char* color*/) {
	f_positionX = x;
	f_positionY = y;
	i_radius = radius;

	//c_color = sf::Color::color;
	f_direction.resize(2);
	f_direction[0] = directionX;
	f_direction[1] = directionY;
	shape = new sf::CircleShape(i_radius);
	shape->setPosition(f_positionX, f_positionY);
	shape->setFillColor(sf::Color::Red);
}

/*void gameObject::rotation(sf::RenderWindow& window) {
	sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

	// Calcul de l'angle entre le canon et la position de la souris
	shape->setOrigin(10.f, 30.f);
	float angle = atan2(mousePosition.y - shape->getPosition().y, mousePosition.x - shape->getPosition().x);
	angle = angle * 180 / 3.14159 + 90; // Conversion en degrés
	float pastAngle = angle;
	angle = fmin(75, fmax(-75, angle));

	if (pastAngle == angle)
	{
		shape->setRotation(angle); // Rotation du canon
	}
}*/

/*void gameObject::move(float fDeltaTime) {
	i_positionX += f_direction[0]*100.f*fDeltaTime;
	i_positionY += f_direction[1]*100.f*fDeltaTime;
	shape->setPosition(i_positionX, i_positionY);
}*/

void gameObject::drawShape(sf::RenderWindow& window) {
	window.draw(*shape);
}

sf::Shape* gameObject::getShape() {
	return shape;
}

void gameObject::setDirection(float fX, float fY) {
	if (fX == 0 && fY == 0) {
		f_direction[0] = fX;
		f_direction[1] = fY;
	}
	else {
		float length = sqrt(fX * fX + fY * fY);
		f_direction[0] = fX / length;
		f_direction[1] = fY / length;
	}
	
}

std::vector<float>  gameObject::getDirection() {
	return f_direction;
}
std::vector<float>  gameObject::getPos() {
	std::vector<float> pos;
	pos.resize(2);
	pos[0] = f_positionX;
	pos[1] = f_positionY;
	return pos;
}
int gameObject::getWidth() {
	return i_width;
}
int gameObject::getHeight() {
	return i_height;
}

gameObject::~gameObject() {

}