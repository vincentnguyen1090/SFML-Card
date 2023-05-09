//
// Created by vince on 2/14/2023.
//

#include "Card.h"
#include <iostream>
Card::Card(Rank rank, Suit suit)
:rank(rank), suit(suit)
{
    createBackground();
    this->suit.setScale(0.3,0.3);
    Position::center(rect, this->suit);
}
void Card::createBackground()
{
    rect.setSize(sf::Vector2f(300, 500));
    rect.setFillColor(sf::Color::White);
    rectBounds = rect.getGlobalBounds();
    rect.setOrigin(rectBounds.width/2, rectBounds.height/2);
    rect.setPosition(512,360);

}
void Card::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    window.draw(rect);
    window.draw(rank);
    window.draw(suit);
}


