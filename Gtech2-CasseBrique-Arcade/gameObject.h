#pragma once
#include <SFML/Graphics.hpp>
class gameObject
{
private:
	float i_positionX;
	float i_positionY;
	int i_width;
	int i_height;
	int i_radius;
	std::vector<float> f_direction;
	
	//char* c_color;
	/*sf::RectangleShape oRectangle;
	sf::CircleShape oCircle;*/
	sf::Shape* shape;

public:
	gameObject(float x, float y, int width, int height, int directionX, int directionY/*, char* color*/);
	gameObject(float x, float y, int radius, int directionX, int directionY/*, char* color*/);
	//sf::Shape getShape();
	void rotation();
	void move(float fDeltaTime);
	void collided(gameObject& obstacle);
	void drawShape(sf::RenderWindow& window);
};

