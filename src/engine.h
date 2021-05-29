#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include <time.h>
#include "config.h"
#include "vector2.h"
#include "map.h"
#include "shape.h"
#include "textDisplayer.h"

class Engine{
    private:
        Map& map;
        NextShapePanel& panel;
        TextDisplayer& displayer;
        Shape* currentShape;
        Shape* nextShape;
        long points = 0;
        int pointsArr [4] {100, 300, 500, 800};
        bool gameEnded;

    public:
        Engine(Map& n_viz, NextShapePanel& n_panel, TextDisplayer& n_displayer);
        void generateShape();
        void moveObject();
        bool checkIfGameEnded();
        void moveLeft();
        void moveRight();
        void rotate();
        void fallFast();
        void keyHandler(sf::Event event);
        long getPoints(){return points;}
        void addPoints();
        bool isGameOver(){return gameEnded;}
        void restart();
};

#endif