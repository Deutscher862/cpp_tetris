#ifndef TILE_H // include guard
#define TILE_H

#include <SFML/Graphics.hpp>
#include "config.h"

class Tile{
    private:
        sf::RectangleShape rectangle;
        sf::Color color;

    public:
        Tile();
        void setColor(sf::Color color);
        void setPosition(int x, int y);
        sf::RectangleShape getRect();


};

#endif