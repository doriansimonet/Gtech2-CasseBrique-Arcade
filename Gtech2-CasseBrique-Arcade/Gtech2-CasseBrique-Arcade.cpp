
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

    gameObject* rectangle = new gameObject(100,100,100,100);
    sf::RectangleShape brique = rectangle->getShape();

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

        //DRAW
        oWindow.clear();
        //sf::RectangleShape brique1 = brique;
        sf::RectangleShape brique = rectangle->getShape();
        oWindow.draw(brique);

        oWindow.display();
        
        rectangle->move(fDeltaTime);
        fDeltaTime = oClock.restart().asSeconds();
    }
    

    return 0;
}
