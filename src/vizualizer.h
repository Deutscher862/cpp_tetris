#ifndef VIZUALIZER_H // include guard
#define VIZUALIZER_H

#include <SFML/Graphics.hpp>
#include "config.h"
#include "tile.h"

class Vizualizer{
    private:
        Tile grid [HEIGHT][WIDTH];
        sf::RenderWindow& window;

    public:
        Vizualizer(sf::RenderWindow& window);
        void drawGrid();
};

#endif