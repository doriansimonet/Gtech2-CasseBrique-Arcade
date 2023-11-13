
#include <SFML/Graphics.hpp>
#include <math.h>
#include "colors.h"
#include "gameObject.h"
#include "Canon.h"
#include "Brick.h"
#include "Ball.h"

int main(int argc, char** argv)
{
    srand(time(NULL));
    Color green(0xadff2f);
    Color greenclaire(0x76ff7a);
    Color blue(0x4169E1);
    Color blueclaire(0xF0F8FF);
    Color red(0x790909);
    Color orange(0xff5900);
    Color degrader;
    //Création d'une fenêtre
    sf::RenderWindow oWindow(sf::VideoMode(640, 480), "SFML");

    //Création d'un cercle de radius 10
    //sf::CircleShape oCircleBall(10.f);
    Ball* oBall = new Ball(0, 100, 10, 1, 0);
    Ball* oBallUp = new Ball(0, 100, 10, 0, 1);
    Ball* oBallVer = new Ball(0, 300, 10, 1, 0);
    //A la position 0, 0
    //oCircleBall.setPosition(0.f, 100.f);
    //Et de couleur Magenta
    //oCircleBall.setFillColor(sf::Color::Magenta);


    //Création d'un rectangle de taille 30, 10, pos 500,100
    Brick* oBrique1 = new Brick(500, 100, 30, 10, 0, 0);

    /*sf::RectangleShape oRectangleBrique1(sf::Vector2f(30.f, 10.f));
    //A la position 500, 100
    oRectangleBrique1.setPosition(500.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 0.0f);
    //Couleur 
    oRectangleBrique1.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));
    */

    //Création d'un rectangle de taille 30, 10, pos 460,100
    Brick* oBrique2 = new Brick(460, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10
    Brick* oBrique3 = new Brick(420, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 380,100
    Brick* oBrique4 = new Brick(380, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 340,100
    Brick* oBrique5 = new Brick(340, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 300,100
    Brick* oBrique6 = new Brick(300, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 260,100
    Brick* oBrique7 = new Brick(260, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 220,100
    Brick* oBrique8 = new Brick(220, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 180,100
    Brick* oBrique9 = new Brick(180, 100, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 140,100
    Brick* oBrique10 = new Brick(140, 100, 30, 10, 0, 0);


// Changement de degrader et de ligne 



    //Création d'un rectangle de taille 30, 10, pos 500,80
    Brick* oBrique11 = new Brick(500, 80, 30, 10, 0, 0);

    /*sf::RectangleShape oRectangleBrique1(sf::Vector2f(30.f, 10.f));
    //A la position 500, 100
    oRectangleBrique1.setPosition(500.f, 100.f);
    blue.mixin(bleuclaire, &degrader, 1.0f / 9.0f * 0.0f);
    //Couleur
    oRectangleBrique1.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));
    */

    //Création d'un rectangle de taille 30, 10, pos 460,80
    Brick* oBrique12 = new Brick(460, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 420,80
    Brick* oBrique13 = new Brick(420, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 380,80
    Brick* oBrique14 = new Brick(380, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 340,80
    Brick* oBrique15 = new Brick(340, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 300,80
    Brick* oBrique16 = new Brick(300, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 260,80
    Brick* oBrique17 = new Brick(260, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 220,80
    Brick* oBrique18 = new Brick(220, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 180,80
    Brick* oBrique19 = new Brick(180, 80, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 140,80
    Brick* oBrique20 = new Brick(140, 80, 30, 10, 0, 0);

    //Changement de degardé et de ligne


    //Création d'un rectangle de taille 30, 10, pos 500,60
    Brick* oBrique21 = new Brick(500, 60, 30, 10, 0, 0);

    /*sf::RectangleShape oRectangleBrique1(sf::Vector2f(30.f, 10.f));
    //A la position 500, 100
    oRectangleBrique1.setPosition(500.f, 100.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 0.0f);
    //Couleur
    oRectangleBrique1.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));
    */

    //Création d'un rectangle de taille 30, 10, pos 460,60
    Brick* oBrique22 = new Brick(460, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 420,60
    Brick* oBrique23 = new Brick(420, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 380,60
    Brick* oBrique24 = new Brick(380, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 340,60
    Brick* oBrique25 = new Brick(340, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 300,60
    Brick* oBrique26 = new Brick(300, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 260,60
    Brick* oBrique27 = new Brick(260, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 220,60
    Brick* oBrique28 = new Brick(220, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 180,60
    Brick* oBrique29 = new Brick(180, 60, 30, 10, 0, 0);

    //Création d'un rectangle de taille 30, 10, pos 140,60
    Brick* oBrique30 = new Brick(140, 60, 30, 10, 0, 0);

    //Canon

    //Création d'un rectangle de taille 20, 60
    Cannon* oCanon = new Cannon(310, 420, 20, 60, 0, 0);
    /*
    sf::RectangleShape oRectangleCanon(sf::Vector2f(20.f, 60.f));
    //A la position 310, 420
    oRectangleCanon.setPosition(310.f, 420.f);
    //Couleur
    oRectangleCanon.setFillColor(sf::Color::Blue);
    */   

    gameObject* rectangle = new gameObject(0,0,100,100,1,0);
    gameObject* rectangle2 = new gameObject(540, 0, 100, 100, -1,0);
    //sf::Shape brique = rectangle->getShape();
    gameObject* circle = new gameObject(500, 100, 50,0,0);
    //sf::CircleShape ball = circle->getShape();
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
        

        //Rotation du cannon
       

        oCanon->rotation(oWindow);


        // Obtenir la position de la souris par rapport à la fenêtre
        /*
        sf::Vector2i mousePosition = sf::Mouse::getPosition(oWindow);
       
        // Calcul de l'angle entre le canon et la position de la souris
        oRectangleCanon.setOrigin(10.f, 30.f);
        float angle = atan2(mousePosition.y - oRectangleCanon.getPosition().y, mousePosition.x - oRectangleCanon.getPosition().x);
        angle = angle * 180 / 3.14159 + 90; // Conversion en degrés
        float pastAngle = angle;
        angle = fmin(75, fmax(-75, angle));

        if (pastAngle == angle)
        {
            oRectangleCanon.setRotation(angle); // Rotation du canon
        }
        */


        //Collision avec la balle
        sf::Shape* ballShape = oBall->getShape();
        sf::FloatRect ballBounds = ballShape->getGlobalBounds();
        //sf::FloatRect ballBounds = oCircleBall.getGlobalBounds();
        sf::Shape* rect = oBrique1->getShape();
        sf::FloatRect brique1Bounds = rect->getGlobalBounds();

        if (ballBounds.intersects(brique1Bounds)) {
            // Collision détectée
            oBall->setDirection(-1,0);
            oBrique1->takeDamage();
        }
        

        oBall->Collision(*oBrique10, ballBounds);

        /*int lifeBrique10 = oBrique10->getLife();
        if (lifeBrique10 > 0) {
            sf::Shape* rect10 = oBrique10->getShape();
            sf::FloatRect brique10Bounds = rect10->getGlobalBounds();

            if (ballBounds.intersects(brique10Bounds)) {
                // Collision détectée
                oBall->setDirection(-1, 0);
                oBrique10->takeDamage();
            }
        }*/


        float testPosX = ballShape->getPosition().x;
        float testPosY = ballShape->getPosition().y;
        if (testPosX <= 0) {
            oBall->setDirection(1,0);
        }
        else if(testPosX>=640){
            oBall->setDirection(-1, 0);
        }
        else if (testPosY <= 0) {
            oBall->setDirection(0, 1);
        }
        else if (testPosY >= 480) {
            oBall->setDirection(0, -1);
        }


        sf::Shape* testUp = oBallUp->getShape();
        float testPosXup = testUp->getPosition().x;
        float testPosYup = testUp->getPosition().y;
        if (testPosXup < 0) {
            oBallUp->setDirection(1, 0);
        }
        else if (testPosXup+20 >= 640) {
            oBallUp->setDirection(-1, 0);
        }
        else if (testPosYup <= 0) {
            oBallUp->setDirection(0, 1);
        }
        else if (testPosYup+20 >= 480) {
            oBallUp->setDirection(0, -1);
        }

        sf::Shape* testVer = oBallVer->getShape();
        float testPosXVer = testVer->getPosition().x;
        float testPosYVer = testVer->getPosition().y;
        if (testPosXVer < 0) {
            oBallVer->setDirection(1, 0);
        }
        else if (testPosXVer + 20 >= 640) {
            oBallVer->setDirection(-1, 0);
        }
        else if (testPosYVer <= 0) {
            oBallVer->setDirection(0, 1);
        }
        else if (testPosYVer + 20 >= 480) {
            oBallVer->setDirection(0, -1);
        }

        //Mouvement de la balle
        sf::Vector2f velocity(0.005, 0);
        oBall->move(fDeltaTime);
        oBallUp->move(fDeltaTime);
        oBallVer->move(fDeltaTime);
        // Mettre à jour la position de la balle en fonction de la vitesse
        //oCircleBall.move(velocity);

        /*if (ballBounds.left < 0 || ballBounds.left + ballBounds.width > oWindow.getSize().x) {
            velocity.x = -velocity.x; // Inverser la vitesse en cas de collision horizontale
        }
        if (ballBounds.top < 0 || ballBounds.top + ballBounds.height > oWindow.getSize().y) {
            velocity.y = -velocity.y; // Inverser la vitesse en cas de collision verticale
        }*/



        //DRAW
        oWindow.clear();
        //sf::RectangleShape brique1 = brique;
        //sf::RectangleShape brique = rectangle->getRectShape();
        //oWindow.draw(brique);
        //oWindow.draw(ball);

        //oWindow.draw(oCircleBall);
        oBall->drawShape(oWindow);
        oBallUp->drawShape(oWindow);
        oBallVer->drawShape(oWindow);
        oBrique1->drawShape(oWindow);
        //oWindow.draw(oRectangleBrique1);
        oBrique2->drawShape(oWindow);
        oBrique3->drawShape(oWindow);
        oBrique4->drawShape(oWindow);
        oBrique5->drawShape(oWindow);
        oBrique6->drawShape(oWindow);
        oBrique7->drawShape(oWindow);
        oBrique8->drawShape(oWindow);
        oBrique9->drawShape(oWindow);
        oBrique10->drawShape(oWindow);
        oBrique11->drawShape(oWindow);
        oBrique12->drawShape(oWindow);
        oBrique13->drawShape(oWindow);
        oBrique14->drawShape(oWindow);
        oBrique15->drawShape(oWindow);
        oBrique16->drawShape(oWindow);
        oBrique17->drawShape(oWindow);
        oBrique18->drawShape(oWindow);
        oBrique19->drawShape(oWindow);
        oBrique20->drawShape(oWindow);
        oBrique21->drawShape(oWindow);
        oBrique22->drawShape(oWindow);
        oBrique23->drawShape(oWindow);
        oBrique24->drawShape(oWindow);
        oBrique25->drawShape(oWindow);
        oBrique26->drawShape(oWindow);
        oBrique27->drawShape(oWindow);
        oBrique28->drawShape(oWindow);
        oBrique29->drawShape(oWindow);
        oBrique30->drawShape(oWindow);

        //oWindow.draw(oRectangleCanon);
        oCanon->drawShape(oWindow);

        oWindow.display();

        fDeltaTime = oClock.restart().asSeconds();
    }
    

    return 0;
}
