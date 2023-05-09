//
// Created by vince on 2/14/2023.
//

#ifndef SFML_PROJECTS_SUIT_H
#define SFML_PROJECTS_SUIT_H
#include <SFML/Graphics.hpp>
#include "suitENUM.h"
#include "Images.h"


class Suit : public sf::Sprite
{
public:
    Suit();
    Suit(suitENUM suit);
};



#endif //SFML_PROJECTS_SUIT_H
