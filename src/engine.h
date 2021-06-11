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
        TextDisplayer& textDisplayer;
        Shape* currentShape;
        Shape* nextShape;
        long points = 0;
        long higherScore = -1;
        int pointsArr [4] {100, 300, 500, 800};
        bool gameEnded;
        long gameSpeed;

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
        long getPoints() const {return points;}
        long getSpeed() const {return gameSpeed;}
        void addPoints();
        bool isGameOver() const {return gameEnded;}
        void restart();
};

#endif