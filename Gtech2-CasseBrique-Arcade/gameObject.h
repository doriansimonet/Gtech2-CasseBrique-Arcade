#pragma once
#include <SFML/Graphics.hpp>
class gameObject
{
private:
	float i_positionX;
	float i_positionY;
	int i_width;
	int i_height;
	std::vector<float> f_direction;
	
	//char* c_color;
	sf::RectangleShape oRectangle;

public:
	gameObject(float x, float y, int width, int height/*, char* color*/);
	sf::RectangleShape getShape();
	void rotation();
	void move(float fDeltaTime);

};

