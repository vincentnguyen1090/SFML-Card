//
// Created by vince on 2/14/2023.
//

#ifndef SFML_PROJECTS_RANK_H
#define SFML_PROJECTS_RANK_H
#include <SFML/Graphics.hpp>
#include "rankENUM.h"
#include "Font.h"
class Rank : public sf::Drawable, public sf::Transformable
{
private:
    sf::Text top, bottom;
    std::string text;
    sf::RectangleShape rect;
    std::string textArr[13] = {"A", "2", "3", "4", "5",
                               "6", "7", "8", "9", "10", "J", "Q", "K"};
public:
    Rank();
    Rank(rankENUM rank);

    void setTopPos(float x, float y);
    void setBottomPos(float x, float y);

    void setRank();
    void setFont();
    void setString();
    void setOrigin();
    void setPosition();
    void rotateBottom();
    void fillColor();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //SFML_PROJECTS_RANK_H
