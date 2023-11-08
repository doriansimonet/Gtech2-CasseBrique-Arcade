#include <iostream>
#include "gameObject.h"
gameObject::gameObject(float x, float y, int width, int height, int directionX, int directionY/*,char* color*/) {
	i_positionX = x;
	i_positionY = y;
	i_width = width;
	i_height = height;

	//c_color = sf::Color::color;
	f_direction.resize(2);
	f_direction[0] = directionX;
	f_direction[1] = directionY;
	shape = new sf::RectangleShape(sf::Vector2f(i_width, i_height));
	shape->setPosition(i_positionX, i_positionY);
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
	i_positionX = x;
	i_positionY = y;
	i_radius = radius;

	//c_color = sf::Color::color;
	f_direction.resize(2);
	f_direction[0] = directionX;
	f_direction[1] = directionY;
	shape = new sf::CircleShape(i_radius);
	shape->setPosition(i_positionX, i_positionY);
	shape->setFillColor(sf::Color::Red);
}

void gameObject::rotation() {
	
}

void gameObject::move(float fDeltaTime) {
	i_positionX += f_direction[0]*100.f*fDeltaTime;
	i_positionY += f_direction[1]*100.f*fDeltaTime;
	shape->setPosition(i_positionX, i_positionY);
}

void gameObject::collided(gameObject& obstacle) {
	int euh = obstacle.i_positionX;
	std::cout << euh;
	/*if (obstacle.i_positionX == i_positionX) {
		std::cout << "ca marche?!";
	}*/
}

void gameObject::drawShape(sf::RenderWindow& window) {
	window.draw(*shape);
}