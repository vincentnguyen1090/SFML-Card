//
// Created by vince on 5/2/2023.
//

#include "PlayingCard.h"

PlayingCard::PlayingCard()
{
    sf::RenderWindow window({1024, 720, 32}, "Background", sf::Style::Default);
    window.setFramerateLimit(60);

    Card Card((Rank(ACE)), Suit(SPADES));

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.draw(Card);
        window.display();
    }
}
