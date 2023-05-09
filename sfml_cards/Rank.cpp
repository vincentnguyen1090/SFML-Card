//
// Created by vince on 2/14/2023.
//

#include "Rank.h"

Rank::Rank() {}

Rank::Rank(rankENUM rank)
{
    text = textArr[rank];
    setRank();
}

void Rank::setRank()
{
    setFont();
    setString();
    setOrigin();
    setPosition();
    rotateBottom();
    fillColor();
}

void Rank::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    window.draw(top);
    window.draw(bottom);
}

void Rank::setFont()
{
    top.setFont(Font::getFont());
    bottom.setFont(Font::getFont());
}

void Rank::setString()
{
    top.setString(text);
    bottom.setString(text);
}

void Rank::setOrigin()
{
    sf::RectangleShape rect(sf::Vector2f(300,500));
    const sf::FloatRect bounds  = rect.getLocalBounds();
    rect.setPosition(512, 360);
    top.setOrigin(bounds.left + bounds.width / 2, bounds.top + bounds.height / 2);
    bottom.setOrigin(bounds.left + bounds.width / 2, bounds.top + bounds.height / 2);
}

void Rank::setPosition()
{
    top.setPosition(512, 360);
    bottom.setPosition(512, 360);
}

void Rank::fillColor()
{
    top.setFillColor(sf::Color::Black);
    bottom.setFillColor(sf::Color::Black);
}

void Rank::rotateBottom()
{
    bottom.rotate(180);
}

void Rank::setTopPos(float x, float y)
{
    top.setPosition(x, y);
}

void Rank::setBottomPos(float x, float y)
{
    bottom.setPosition(x, y);
}







