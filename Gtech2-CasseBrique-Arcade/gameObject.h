#pragma once
#include <SFML/Graphics.hpp>
class gameObject
{
protected:
	float f_positionX;
	float f_positionY;
	int i_width;
	int i_height;
	int i_radius;
	std::vector<float> f_direction;
	sf::Shape* shape;

public:
	gameObject(float x, float y, int width, int height, int directionX, int directionY/*, char* color*/);
	gameObject(float x, float y, int radius, int directionX, int directionY/*, char* color*/);
	sf::Shape* getShape();
	void drawShape(sf::RenderWindow& window);
	void setDirection(float fX, float fY);
	std::vector<float>  getDirection();
	int getWidth();
	int getHeight();
	std::vector<float> getPos();
	~gameObject();
};

