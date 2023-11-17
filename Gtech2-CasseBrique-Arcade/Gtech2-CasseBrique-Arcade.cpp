
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

    //Création d'un rectangle de taille 30, 10, pos 500,100
    Brick* oBrick1 = new Brick(500, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick1);

    //Création d'un rectangle de taille 30, 10, pos 460,100
    Brick* oBrick2 = new Brick(460, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick2);

    //Création d'un rectangle de taille 30, 10
    Brick* oBrick3 = new Brick(420, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick3);

    //Création d'un rectangle de taille 30, 10, pos 380,100
    Brick* oBrick4 = new Brick(380, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick4);

    //Création d'un rectangle de taille 30, 10, pos 340,100
    Brick* oBrick5 = new Brick(340, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick5);

    //Création d'un rectangle de taille 30, 10, pos 300,100
    Brick* oBrick6 = new Brick(300, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick6);

    //Création d'un rectangle de taille 30, 10, pos 260,100
    Brick* oBrick7 = new Brick(260, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick7);

    //Création d'un rectangle de taille 30, 10, pos 220,100
    Brick* oBrick8 = new Brick(220, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick8);

    //Création d'un rectangle de taille 30, 10, pos 180,100
    Brick* oBrick9 = new Brick(180, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick9);

    //Création d'un rectangle de taille 30, 10, pos 140,100
    Brick* oBrick10 = new Brick(140, 100, 30, 10, 0, 0);
    oBricks.push_back(oBrick10);

// Changement de degrader et de ligne 

    //Création d'un rectangle de taille 30, 10, pos 500,80
    Brick* oBrick11 = new Brick(500, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick11);

    //Création d'un rectangle de taille 30, 10, pos 460,80
    Brick* oBrick12 = new Brick(460, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick12);

    //Création d'un rectangle de taille 30, 10, pos 420,80
    Brick* oBrick13 = new Brick(420, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick13);

    //Création d'un rectangle de taille 30, 10, pos 380,80
    Brick* oBrick14 = new Brick(380, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick14);

    //Création d'un rectangle de taille 30, 10, pos 340,80
    Brick* oBrick15 = new Brick(340, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick15);

    //Création d'un rectangle de taille 30, 10, pos 300,80
    Brick* oBrick16 = new Brick(300, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick16);

    //Création d'un rectangle de taille 30, 10, pos 260,80
    Brick* oBrick17 = new Brick(260, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick17);

    //Création d'un rectangle de taille 30, 10, pos 220,80
    Brick* oBrick18 = new Brick(220, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick18);

    //Création d'un rectangle de taille 30, 10, pos 180,80
    Brick* oBrick19 = new Brick(180, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick19);

    //Création d'un rectangle de taille 30, 10, pos 140,80
    Brick* oBrick20 = new Brick(140, 80, 30, 10, 0, 0);
    oBricks.push_back(oBrick20);

    // Changement de degrader et de ligne 

    //Création d'un rectangle de taille 30, 10, pos 500,60
    Brick* oBrick21 = new Brick(500, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick21);

    //Création d'un rectangle de taille 30, 10, pos 460,60
    Brick* oBrick22 = new Brick(460, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick22);

    //Création d'un rectangle de taille 30, 10, pos 420,60
    Brick* oBrick23 = new Brick(420, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick23);

    //Création d'un rectangle de taille 30, 10, pos 380,60
    Brick* oBrick24 = new Brick(380, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick24);

    //Création d'un rectangle de taille 30, 10, pos 340,60
    Brick* oBrick25 = new Brick(340, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick25);

    //Création d'un rectangle de taille 30, 10, pos 300,60
    Brick* oBrick26 = new Brick(300, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick26);

    //Création d'un rectangle de taille 30, 10, pos 260,60
    Brick* oBrick27 = new Brick(260, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick27);

    //Création d'un rectangle de taille 30, 10, pos 220,60
    Brick* oBrick28 = new Brick(220, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick28);

    //Création d'un rectangle de taille 30, 10, pos 180,86
    Brick* oBrick29 = new Brick(180, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick29);

    //Création d'un rectangle de taille 30, 10, pos 140,86
    Brick* oBrick30 = new Brick(140, 60, 30, 10, 0, 0);
    oBricks.push_back(oBrick30);

    //Changement de degardé et de ligne

    //Création d'un rectangle de taille 30, 10, pos 500,120
    Brick* oBrick31 = new Brick(500, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick31);
    //Création d'un rectangle de taille 30, 10, pos 460,120
    Brick* oBrick32 = new Brick(460, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick32);

    //Création d'un rectangle de taille 30, 10, pos 420,120
    Brick* oBrick33 = new Brick(420, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick33);

    //Création d'un rectangle de taille 30, 10, pos 380,120
    Brick* oBrick34 = new Brick(380, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick34);

    //Création d'un rectangle de taille 30, 10, pos 340,120
    Brick* oBrick35 = new Brick(340, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick35);

    //Création d'un rectangle de taille 30, 10, pos 300,120
    Brick* oBrick36 = new Brick(300, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick36);

    //Création d'un rectangle de taille 30, 10, pos 260,120
    Brick* oBrick37 = new Brick(260, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick37);

    //Création d'un rectangle de taille 30, 10, pos 220,120
    Brick* oBrick38 = new Brick(220, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick38);

    //Création d'un rectangle de taille 30, 10, pos 180,120
    Brick* oBrick39 = new Brick(180, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick39);

    //Création d'un rectangle de taille 30, 10, pos 140,120
    Brick* oBrick40 = new Brick(140, 120, 30, 10, 0, 0);
    oBricks.push_back(oBrick40);

    //Changement de degardé et de ligne

    //Création d'un rectangle de taille 30, 10, pos 500,140
    Brick* oBrick41 = new Brick(500, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick41);

    //Création d'un rectangle de taille 30, 10, pos 460,140
    Brick* oBrick42 = new Brick(460, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick42);

    //Création d'un rectangle de taille 30, 10, pos 420,140
    Brick* oBrick43 = new Brick(420, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick43);

    //Création d'un rectangle de taille 30, 10, pos 380,140
    Brick* oBrick44 = new Brick(380, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick44);

    //Création d'un rectangle de taille 30, 10, pos 340,140
    Brick* oBrick45 = new Brick(340, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick45);

    //Création d'un rectangle de taille 30, 10, pos 300,140
    Brick* oBrick46 = new Brick(300, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick46);

    //Création d'un rectangle de taille 30, 10, pos 260,140
    Brick* oBrick47 = new Brick(260, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick47);

    //Création d'un rectangle de taille 30, 10, pos 220,140
    Brick* oBrick48 = new Brick(220, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick48);

    //Création d'un rectangle de taille 30, 10, pos 180,140
    Brick* oBrick49 = new Brick(180, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick49);

    //Création d'un rectangle de taille 30, 10, pos 140,140
    Brick* oBrick50 = new Brick(140, 140, 30, 10, 0, 0);
    oBricks.push_back(oBrick50);

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
