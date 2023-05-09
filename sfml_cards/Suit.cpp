//
// Created by vince on 2/14/2023.
//

#include "Suit.h"

Suit::Suit() {}
Suit::Suit(suitENUM suit)
{
    setTexture(Images::getImage(suit));
}
