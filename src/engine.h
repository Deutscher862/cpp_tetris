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
        long points = 0;
        int pointsArr [4] {100, 300, 500, 800};

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
        long getPoints(){return points;}
        void addPoints();
};

#endif