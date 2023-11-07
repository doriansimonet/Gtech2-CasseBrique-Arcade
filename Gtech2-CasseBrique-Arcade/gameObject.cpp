#include "gameObject.h"
gameObject::gameObject(float x, float y, int width, int height/*,char* color*/) {
	i_positionX = x;
	i_positionY = y;
	i_width = width;
	i_height = height;
	//c_color = sf::Color::color;
	f_direction.resize(2);
	f_direction[0] = 0;
	f_direction[1] = 1;
	oRectangle = sf::RectangleShape(sf::Vector2f(i_width, i_height));
	oRectangle.setPosition(i_positionX,i_positionY);
	oRectangle.setFillColor(sf::Color::Red);
}

sf::RectangleShape gameObject::getShape() {
	return oRectangle;
}

void gameObject::rotation() {
	
}

void gameObject::move(float fDeltaTime) {
	i_positionX += f_direction[0]*100.f*fDeltaTime;
	i_positionY += f_direction[1]*100.f*fDeltaTime;
	oRectangle.setPosition(i_positionX, i_positionY);
}
