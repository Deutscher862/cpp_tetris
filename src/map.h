#ifndef MAP_H // include guard
#define MAP_H

#include <SFML/Graphics.hpp>
#include "config.h"
#include "tile.h"
#include "shape.h"

class Map{
    private:
        Tile* grid [HEIGHT][WIDTH]{};
        sf::RenderWindow& window;

    public:
        explicit Map(sf::RenderWindow &window);
        void drawGrid();
        bool canShapeFall(Shape* shape);
        bool canShapeMoveLeft(Shape* shape);
        bool canShapeMoveRight(Shape* shape);
        bool canShapeRotate(Shape* shape);
        void colorTiles(Shape* shape, sf::Color color);
        void blockTiles(Shape* shape);
        void checkForFullRow();
        void removeRow(int firstRow);
};

class NextShapePanel{
    private:
        Tile* grid [2][4]{};
        sf::RenderWindow& window;

    public:
        explicit NextShapePanel(sf::RenderWindow &window);
        void drawGrid();
        void colorTiles(Shape* shape, sf::Color color);
};

#endif