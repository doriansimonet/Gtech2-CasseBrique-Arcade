
#include <SFML/Graphics.hpp>
#include "gameObject.h"
#include "Canon.h"
#include "Brick.h"
#include "Ball.h"
//#include <iostream>

int main(int argc, char** argv)
{
    srand(time(NULL));
    //Création d'une fenêtre
    sf::RenderWindow oWindow(sf::VideoMode(640, 480), "SFML");

    //Création d'un cercle de radius 10
    Ball* oBall = new Ball(305, 415, 5, 0, 0);

    //liste des Bricks
    std::vector<Brick*> oBricks;
    std::vector<Brick*> colBricks;
    colBricks.resize(1);
    oBricks.resize(50);
    float posX = 500;
    float posY = 100;
    float width = 30;
    float height = 10;
    for (int i = 0; i < 50; i += 1) {
        if (i == 10 || i== 20 || i==30||i==40 ) {
            posY = posY - 20;
            posX = 500;
        }
        oBricks[i] = new Brick(posX, posY, width, height, 0, 0);
        posX = posX - 40;
    }

    //Canon

    //Création d'un rectangle de taille 20, 60
    Cannon* oCanon = new Cannon(310, 420, 20, 60, 0, 0);
    float fDeltaTime = 0;
    sf::Clock oClock;

    //GameLoop
    while (oWindow.isOpen())
    {
        //EVENT
        sf::Event oEvent;
        while (oWindow.pollEvent(oEvent))
        {
            if (oEvent.type == sf::Event::Closed)
                oWindow.close();
        }

        //UPDATE
        
        //Rotation/Tire du cannon
       
        oCanon->rotation(oWindow);
        oCanon->tire(oWindow,oBall);

        //Collision avec la balle
        sf::Shape* ballShape = oBall->getShape();
        sf::FloatRect ballBounds = ballShape->getGlobalBounds();

        for (int i = 0; i < 50; i += 1) {
            colBricks = oBall->collision(oBricks[i], ballBounds, colBricks);
        }

        float posX = ballShape->getPosition().x;
        float posY = ballShape->getPosition().y;
        std::vector<float> dir = oBall->getDirection();
        if (posX < 0) {
            oBall->setDirection(dir[0]*-1, dir[1]);
            colBricks.clear();
        }
        else if(posX+20>640){
            oBall->setDirection(dir[0] * -1, dir[1]);
            colBricks.clear();
        }
        else if (posY < 0) {
            oBall->setDirection(dir[0], dir[1] * -1);
            colBricks.clear();
        }
        else if (posY+20 > 480) {
            oBall->setDirection(0, 0);
            oBall->changePos(305,415);
            colBricks.clear();
        }

        //Mouvement de la balle
        sf::Vector2f velocity(0.005, 0);
        oBall->move(fDeltaTime);

        //DRAW
        oWindow.clear();

        oCanon->drawShape(oWindow);

        for (int i = 0; i < 50; i += 1) {
            oBricks[i]->drawShape(oWindow);
        }
  
        oBall->drawShape(oWindow);
        oWindow.display();

        fDeltaTime = oClock.restart().asSeconds();
    }

    return 0;
}
