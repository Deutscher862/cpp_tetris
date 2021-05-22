#ifndef VIZUALIZER_H // include guard
#define VIZUALIZER_H

#include <SFML/Graphics.hpp>
#include "config.h"
#include "tile.h"
#include "shape.h"

class Vizualizer{
    private:
        Tile* grid [HEIGHT][WIDTH]{};
        sf::RenderWindow& window;

    public:
        explicit Vizualizer(sf::RenderWindow &window);
        void drawGrid();
        bool canShapeFall(Shape* shape);
        bool canShapeMoveLeft(Shape* shape);
        bool canShapeMoveRight(Shape* shape);
        bool canShapeRotate(Shape* shape);
        void colorTiles(Shape* shape, sf::Color color);
        void blockTiles(Shape* shape);

};

#endif