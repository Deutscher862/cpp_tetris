#ifndef TILE_H // include guard
#define TILE_H

#include <SFML/Graphics.hpp>
#include "config.h"

class Tile{
    private:
        sf::RectangleShape rectangle;
        sf::Color color;

    public:
        Tile(int x, int y){
            sf::RectangleShape rec;
            rec.setSize(sf::Vector2f(10, 10));
            rec.setOutlineColor(sf::Color::Red);
            rec.setFillColor(sf::Color::Blue);
            rec.setOutlineThickness(1);
            rec.setPosition(y*10+10, x*10+20);

            this->color = sf::Color::Blue;

            this->rectangle = rec;
        }
        
        void setColor(sf::Color color);
        sf::RectangleShape getRect();
};

#endif