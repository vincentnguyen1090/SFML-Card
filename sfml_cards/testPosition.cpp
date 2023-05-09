//
// Created by vince on 2/16/2023.
//

#include "testPosition.h"
#include "Position.h"
void positionDriver()
{
    sf::RenderWindow window({800, 600}, "Text", sf::Style::Default);
    window.setFramerateLimit(60);

    Position windows, rectangle;

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        //window.draw();
        window.display();
    }
}
