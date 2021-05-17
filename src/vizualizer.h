#ifndef VIZUALIZER_H // include guard
#define VIZUALIZER_H

#include <SFML/Graphics.hpp>
#include "config.h"

class Vizualizer{
    private:
        sf::RectangleShape grid [HEIGHT][WIDTH];
        sf::RenderWindow& window;

    public:
        Vizualizer(sf::RenderWindow& window);
        void drawGrid();
};

#endif