
#include <SFML/Graphics.hpp>

int main(int argc, char** argv)
{
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
    sf::CircleShape oCircleBall(10.f);
    //A la position 0, 0
    oCircleBall.setPosition(0.f, 100.f);
    //Et de couleur Magenta
    oCircleBall.setFillColor(sf::Color::Magenta);


    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique1(sf::Vector2f(30.f, 10.f));
    //A la position 500, 100
    oRectangleBrique1.setPosition(500.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 0.0f);
    //Couleur 
    oRectangleBrique1.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique2(sf::Vector2f(30.f, 10.f));
    //A la position 460, 100
    oRectangleBrique2.setPosition(460.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 1.0f);
    //Couleur
    oRectangleBrique2.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique3(sf::Vector2f(30.f, 10.f));
    //A la position 420, 100
    oRectangleBrique3.setPosition(420.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 2.0f);
    //Couleur
    oRectangleBrique3.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique4(sf::Vector2f(30.f, 10.f));
    //A la position 380, 100
    oRectangleBrique4.setPosition(380.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 3.0f);
    //Couleur
    oRectangleBrique4.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique5(sf::Vector2f(30.f, 10.f));
    //A la position 340, 100
    oRectangleBrique5.setPosition(340.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 4.0f);
    //Couleur
    oRectangleBrique5.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique6(sf::Vector2f(30.f, 10.f));
    //A la position 300, 100
    oRectangleBrique6.setPosition(300.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 5.0f);
    //Couleur
    oRectangleBrique6.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique7(sf::Vector2f(30.f, 10.f));
    //A la position 260, 100
    oRectangleBrique7.setPosition(260.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 6.0f);
    //Couleur
    oRectangleBrique7.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique8(sf::Vector2f(30.f, 10.f));
    //A la position 220, 100
    oRectangleBrique8.setPosition(220.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 7.0f);
    //Couleur
    oRectangleBrique8.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique9(sf::Vector2f(30.f, 10.f));
    //A la position 180, 100
    oRectangleBrique9.setPosition(180.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 8.0f);
    //Couleur
    oRectangleBrique9.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique10(sf::Vector2f(30.f, 10.f));
    //A la position 140, 100
    oRectangleBrique10.setPosition(140.f, 100.f);
    green.mixin(greenclaire, &degrader, 1.0f / 9.0f * 9.0f);
    //Couleur
    oRectangleBrique10.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));



// Changement de degrader et de ligne 



    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique11(sf::Vector2f(30.f, 10.f));
    //A la position 140, 80
    oRectangleBrique11.setPosition(140.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 0.0f);
    //Couleur
    oRectangleBrique11.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique12(sf::Vector2f(30.f, 10.f));
    //A la position 180, 80
    oRectangleBrique12.setPosition(180.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 1.0f);
    //Couleur
    oRectangleBrique12.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique13(sf::Vector2f(30.f, 10.f));
    //A la position 220, 80
    oRectangleBrique13.setPosition(220.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 2.0f);
    //Couleur
    oRectangleBrique13.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique14(sf::Vector2f(30.f, 10.f));
    //A la position 260, 80
    oRectangleBrique14.setPosition(260.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 3.0f);
    //Couleur
    oRectangleBrique14.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique15(sf::Vector2f(30.f, 10.f));
    //A la position 300, 80
    oRectangleBrique15.setPosition(300.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 4.0f);
    //Couleur
    oRectangleBrique15.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique16(sf::Vector2f(30.f, 10.f));
    //A la position 340, 80
    oRectangleBrique16.setPosition(340.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 5.0f);
    //Couleur
    oRectangleBrique16.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique17(sf::Vector2f(30.f, 10.f));
    //A la position 380, 80
    oRectangleBrique17.setPosition(380.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 6.0f);
    //Couleur
    oRectangleBrique17.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique18(sf::Vector2f(30.f, 10.f));
    //A la position 420, 80
    oRectangleBrique18.setPosition(420.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 7.0f);
    //Couleur
    oRectangleBrique18.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique19(sf::Vector2f(30.f, 10.f));
    //A la position 460, 80
    oRectangleBrique19.setPosition(460.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 8.0f);
    //Couleur
    oRectangleBrique19.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique20(sf::Vector2f(30.f, 10.f));
    //A la position 500, 80
    oRectangleBrique20.setPosition(500.f, 80.f);
    blueclaire.mixin(blue, &degrader, 1.0f / 9.0f * 9.0f);
    //Couleur
    oRectangleBrique20.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));


    //Changement de degardé et de ligne


    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique21(sf::Vector2f(30.f, 10.f));
    //A la position 500, 60
    oRectangleBrique21.setPosition(500.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 0.0f);
    //Couleur
    oRectangleBrique21.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique22(sf::Vector2f(30.f, 10.f));
    //A la position 460, 60
    oRectangleBrique22.setPosition(460.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 1.0f);
    //Couleur
    oRectangleBrique22.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique23(sf::Vector2f(30.f, 10.f));
    //A la position 420, 60
    oRectangleBrique23.setPosition(420.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 2.0f);
    //Couleur
    oRectangleBrique23.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique24(sf::Vector2f(30.f, 10.f));
    //A la position 380, 60
    oRectangleBrique24.setPosition(380.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 3.0f);
    //Couleur
    oRectangleBrique24.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique25(sf::Vector2f(30.f, 10.f));
    //A la position 340, 60
    oRectangleBrique25.setPosition(340.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 4.0f);
    //Couleur
    oRectangleBrique25.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique26(sf::Vector2f(30.f, 10.f));
    //A la position 300, 60
    oRectangleBrique26.setPosition(300.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 5.0f);
    //Couleur
    oRectangleBrique26.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique27(sf::Vector2f(30.f, 10.f));
    //A la position 260, 60
    oRectangleBrique27.setPosition(260.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 6.0f);
    //Couleur
    oRectangleBrique27.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique28(sf::Vector2f(30.f, 10.f));
    //A la position 220, 60
    oRectangleBrique28.setPosition(220.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 7.0f);
    //Couleur
    oRectangleBrique28.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique29(sf::Vector2f(30.f, 10.f));
    //A la position 180, 60
    oRectangleBrique29.setPosition(180.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 8.0f);
    //Couleur
    oRectangleBrique29.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));

    //Création d'un rectangle de taille 30, 10
    sf::RectangleShape oRectangleBrique30(sf::Vector2f(30.f, 10.f));
    //A la position 140, 60
    oRectangleBrique30.setPosition(140.f, 60.f);
    red.mixin(orange, &degrader, 1.0f / 9.0f * 9.0f);
    //Couleur
    oRectangleBrique30.setFillColor(sf::Color(degrader.r(), degrader.g(), degrader.b()));


    //Canon

    //Création d'un rectangle de taille 20, 60
    sf::RectangleShape oRectangleCanon(sf::Vector2f(20.f, 60.f));
    //A la position 310, 420
    oRectangleCanon.setPosition(310.f, 420.f);
    //Couleur
    oRectangleCanon.setFillColor(sf::Color::Blue);
   

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
       


        // Obtenir la position de la souris par rapport à la fenêtre
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



        //Collision avec la balle
      
        sf::FloatRect ballBounds = oCircleBall.getGlobalBounds();
        sf::FloatRect brique1Bounds = oRectangleBrique1.getGlobalBounds();

        if (ballBounds.intersects(brique1Bounds)) {
            // Collision détectée
            oCircleBall.setFillColor(sf::Color::Green);
            oRectangleBrique1.setFillColor(sf::Color::Green);
        }
        else {
            // Pas de collision
            oCircleBall.setFillColor(sf::Color::Blue);
            oRectangleBrique1.setFillColor(sf::Color::Red);
        }



        //Mouvement de la balle
        sf::Vector2f velocity(0.005, 0);
        // Mettre à jour la position de la balle en fonction de la vitesse
        oCircleBall.move(velocity);

        if (ballBounds.left < 0 || ballBounds.left + ballBounds.width > oWindow.getSize().x) {
            velocity.x = -velocity.x; // Inverser la vitesse en cas de collision horizontale
        }
        if (ballBounds.top < 0 || ballBounds.top + ballBounds.height > oWindow.getSize().y) {
            velocity.y = -velocity.y; // Inverser la vitesse en cas de collision verticale
        }



        //DRAW
        oWindow.clear();
        //sf::RectangleShape brique1 = brique;
        //sf::RectangleShape brique = rectangle->getRectShape();
        //oWindow.draw(brique);
        //oWindow.draw(ball);

        oWindow.draw(oCircleBall);
        oWindow.draw(oRectangleBrique1);
        oWindow.draw(oRectangleBrique2);
        oWindow.draw(oRectangleBrique3);
        oWindow.draw(oRectangleBrique4);
        oWindow.draw(oRectangleBrique5);
        oWindow.draw(oRectangleBrique6);
        oWindow.draw(oRectangleBrique7);
        oWindow.draw(oRectangleBrique8);
        oWindow.draw(oRectangleBrique9);
        oWindow.draw(oRectangleBrique10);
        oWindow.draw(oRectangleBrique11);
        oWindow.draw(oRectangleBrique12);
        oWindow.draw(oRectangleBrique13);
        oWindow.draw(oRectangleBrique14);
        oWindow.draw(oRectangleBrique15);
        oWindow.draw(oRectangleBrique16);
        oWindow.draw(oRectangleBrique17);
        oWindow.draw(oRectangleBrique18);
        oWindow.draw(oRectangleBrique19);
        oWindow.draw(oRectangleBrique20);
        oWindow.draw(oRectangleBrique21);
        oWindow.draw(oRectangleBrique22);
        oWindow.draw(oRectangleBrique23);
        oWindow.draw(oRectangleBrique24);
        oWindow.draw(oRectangleBrique25);
        oWindow.draw(oRectangleBrique26);
        oWindow.draw(oRectangleBrique27);
        oWindow.draw(oRectangleBrique28);
        oWindow.draw(oRectangleBrique29);
        oWindow.draw(oRectangleBrique30);
        oWindow.draw(oRectangleCanon);

        oWindow.display();

        fDeltaTime = oClock.restart().asSeconds();
    }
    

    return 0;
}
