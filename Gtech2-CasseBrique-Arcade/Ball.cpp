#include "Ball.h"
#include <iostream>
Ball::Ball(float x, float y, int radius, int directionX, int directionY) : gameObject(x,y,radius,directionX,directionY),f_speed(400.f){}

void Ball::move(float fDeltaTime) {
	f_positionX += f_direction[0] * f_speed * fDeltaTime;
	f_positionY += f_direction[1] * f_speed * fDeltaTime;
	shape->setPosition(f_positionX, f_positionY);
}

std::vector<Brick*> Ball::collision(Brick* brique, sf::FloatRect ballBounds, std::vector<Brick*> colBricks) {
    int lifeBrique = brique->getLife();
    sf::Shape* rect = brique->getShape();
    sf::FloatRect briqueBounds = rect->getGlobalBounds();
    if (lifeBrique > 0) {
        for (int i = 0; i < colBricks.size(); i += 1) {
            if (brique == colBricks[i]) {
                return colBricks;
            }
        }

        if (ballBounds.intersects(briqueBounds)) {
            //std::cout << lifeBrique;
            // Collision détectée
            colBricks.push_back(brique);
            this->bounce(brique);
            brique->takeDamage();
            return colBricks;
        }
    }
    return colBricks;
}

void Ball::bounce(Brick* brique) {
    std::vector<float> briquePos = brique->getPos();

    float up = (briquePos[1]+brique->getHeight()) - f_positionY;//collision haut de la balle change Y
    float left = (briquePos[0]+brique->getWidth()) - f_positionX;// collision gauche de la balle change X
    float down = (f_positionY + i_radius) - briquePos[1];//collision bas de la balle change Y
    float right = (f_positionX + i_radius) - briquePos[0];// collision droite de la balle change X
    if (up < left && up < down && up < right) {
        this->setDirection(f_direction[0], f_direction[1] * (-1));
    }
    if (left < up && left < down && left < right) {
        this->setDirection(f_direction[0] * (-1), f_direction[1]);
    }
    if (down < left && down < up && down < right) {
        this->setDirection(f_direction[0], f_direction[1] * (-1));
    }
    if (right < up && right < down && right < left) {
        this->setDirection(f_direction[0] * (-1), f_direction[1]);
    }
    if (right == up || right == down || up == left || down == left) {
        this->setDirection(f_direction[0] * (-1), f_direction[1] * (-1));
    }
}

void Ball::changePos(int x, int y) {
    f_positionX = x;
    f_positionY = y;
    shape->setPosition(f_positionX, f_positionY);
}