#ifndef ENGINE_H // include guard
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include <time.h>
#include "config.h"
#include "vector2.h"
#include "map.h"
#include "shape.h"

class Engine{
    private:
        Map& map;
        NextShapePanel& panel;
        Shape* currentShape;
        Shape* nextShape;

    public:
        Engine(Map& n_viz, NextShapePanel& n_panel);
        void generateShape();
        void moveObject();
        void checkIfEnd();
        void moveLeft();
        void moveRight();
        void rotate();
        void fallFast();
        void keyHandler(sf::Event event);
};

#endif