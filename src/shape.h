#ifndef SHAPE_H // include guard
#define SHAPE_H

#include <SFML/Graphics.hpp>
#include "config.h"
#include "vector2.h"

class Shape{
    protected:
        sf::Color color;
        Vector2 center;
        Vector2* map [SHAPE_HEIGHT][SHAPE_WIDTH];

    public:
        virtual void fall() = 0;
        Vector2* getVectorAt(int x, int y) {return map[x][y];}
        sf::Color getColor() {return color;}
};

class O_Shape : public Shape{
    public:
        O_Shape();
        void fall();
};

class I_Shape : public Shape{
    public:
        I_Shape();
        void fall();
};

class T_Shape : public Shape{
    public:
        T_Shape();
        void fall();
};

#endif