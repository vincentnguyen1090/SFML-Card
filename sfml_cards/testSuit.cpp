//
// Created by vince on 2/16/2023.
//

#include "testSuit.h"
#include "Suit.h"
void suitDriver()
{
    sf::RenderWindow window({800, 600}, "Text", sf::Style::Default);
    window.setFramerateLimit(60);

    Suit Diamonds = Suit(DIAMONDS);
    Suit Clubs = Suit(CLUBS);
    Suit Hearts = Suit(HEARTS);
    Suit Spades = Suit(SPADES);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.draw(Hearts);
        window.display();
    }
}
