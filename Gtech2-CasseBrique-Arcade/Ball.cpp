#include "Ball.h"
#include <iostream>
Ball::Ball(float x, float y, int radius, int directionX, int directionY) : gameObject(x,y,radius,directionX,directionY),i_speed(100){}

void Ball::move(float fDeltaTime) {
	f_positionX += f_direction[0] * 100.f * fDeltaTime;
	f_positionY += f_direction[1] * 100.f * fDeltaTime;
	shape->setPosition(f_positionX, f_positionY);
}

void Ball::Collision(Brick brique, sf::FloatRect ballBounds) {
    int lifeBrique10 = brique.getLife();
    sf::Shape* rect10 = brique.getShape();
    sf::FloatRect brique10Bounds = rect10->getGlobalBounds();
    if (lifeBrique10 > 0) {
        

        if (ballBounds.intersects(brique10Bounds)) {
            std::cout << lifeBrique10;
            // Collision détectée
            //f_direction.setDirection(-1, 0);
            f_direction[0] = -1;
            f_direction[1] = 0;
            brique.takeDamage();
        }
    }
}