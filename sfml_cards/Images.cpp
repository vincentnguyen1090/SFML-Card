//
// Created by vince on 2/14/2023.
//

#include "Images.h"

std::vector<sf::Texture> Images::images(LAST_SUIT, sf::Texture());

std::string Images::getPath(suitENUM suit)
{
    switch(suit)
    {
        case SPADES: return "C:\\Users\\vince\\CLionProjects\\sfml_cards\\suits\\spades.png";
        case CLUBS: return "C:\\Users\\vince\\CLionProjects\\sfml_cards\\suits\\club.png";
        case DIAMONDS: return "C:\\Users\\vince\\CLionProjects\\sfml_cards\\suits\\diamonds.png";
        case HEARTS: return "C:\\Users\\vince\\CLionProjects\\sfml_cards\\suits\\heart.png";
    }
}

void Images::loadFile(suitENUM suit)
{
    images[suit].loadFromFile(getPath(suit));
}

sf::Texture& Images::getImage(suitENUM suit)
{
    loadFile(suit);
    return images[suit];
}