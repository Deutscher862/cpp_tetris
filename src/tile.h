#ifndef TILE_H // include guard
#define TILE_H

#include <SFML/Graphics.hpp>
#include "config.h"
#include "vector2.h"

class Tile{
    private:
        sf::RectangleShape rectangle;
        sf::Color color;
        Vector2 v;
        bool empty;

    public:
        Tile();
        void setColor(sf::Color color);
        void setPosition(int x, int y);
        sf::RectangleShape getRect();
        bool isEmpty() const {return empty;}
        void setEmpty(bool b){empty = b;}


};

#endif