
#include <SFML/Graphics.hpp>
#include "gameObject.h"

int main(int argc, char** argv)
{
    
    //Création d'une fenêtre
    sf::RenderWindow oWindow(sf::VideoMode(640, 480), "SFML");

    //Création d'un cercle de radius 100
    sf::CircleShape oCircle(100.f);
    //A la position 0, 0
    oCircle.setPosition(0.f, 0.f);
    //Et de couleur verte
    oCircle.setFillColor(sf::Color::Green);


    /*//Création d'un rectangle de taille 50, 50
    sf::RectangleShape oRectangle(sf::Vector2f(50.f, 50.f));
    //A la position 100, 100
    oRectangle.setPosition(100.f, 100.f);
    //Et de couleur rouge
    oRectangle.setFillColor(sf::Color::Red);*/

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

        rectangle->move(fDeltaTime);
        rectangle2->move(fDeltaTime);
        rectangle->collided(*rectangle2);

        //DRAW
        oWindow.clear();
        //sf::RectangleShape brique1 = brique;
        //sf::RectangleShape brique = rectangle->getRectShape();
        //oWindow.draw(brique);
        //oWindow.draw(ball);

        rectangle->drawShape(oWindow);
        rectangle2->drawShape(oWindow);
        circle->drawShape(oWindow);

        oWindow.display();

        fDeltaTime = oClock.restart().asSeconds();
    }
    

    return 0;
}
