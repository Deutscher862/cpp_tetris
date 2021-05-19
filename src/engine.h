#ifndef ENGINE_H // include guard
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include <time.h>
#include "config.h"
#include "vector2.h"
#include "vizualizer.h"
#include "shape.h"

class Engine{
    private:
        Vizualizer& vizualizer;
        Shape* currentShape;

    public:
        Engine(Vizualizer& n_viz);
        void generateShape();
        void moveObject();
        void checkIfEnd();
        void keyHandler(sf::Event event);
};

#endif