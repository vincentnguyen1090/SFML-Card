//
// Created by vince on 2/15/2023.
//

#include "testRank.h"
#include <iostream>
void rankDriver()
{
    sf::RenderWindow window({800, 600}, "Text", sf::Style::Default);
    window.setFramerateLimit(60);

    Rank A = Rank(ACE);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.draw(A);
        window.display();
    }
}

