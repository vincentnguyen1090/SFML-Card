//
// Created by vince on 2/14/2023.
//

#ifndef SFML_PROJECTS_CARD_H
#define SFML_PROJECTS_CARD_H
#include "Position.h"
#include "Rank.h"
#include "Suit.h"
#include "rankENUM.h"
#include "suitENUM.h"
#include <SFML/Graphics.hpp>

class Card : public sf::Drawable, sf::Transformable, public Position
{
private:
    sf::RectangleShape rect;
    Rank rank;
    Suit suit;
    sf::FloatRect rectBounds;
    float x , y;
public:
    Card(Rank rank, Suit suit);
    void createBackground();

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};



#endif //SFML_PROJECTS_CARD_H
