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
        virtual void moveLeft() = 0;
        virtual void moveRight() = 0;
        Vector2* getVectorAt(int x, int y) {return map[x][y];}
        sf::Color getColor() {return color;}
};

class O_Shape : public Shape{
    public:
        O_Shape();
        void fall();
        void moveLeft();
        void moveRight();
};

class I_Shape : public Shape{
    public:
        I_Shape();
        void fall();
        void moveLeft();
        void moveRight();
};

class T_Shape : public Shape{
    public:
        T_Shape();
        void fall();
        void moveLeft();
        void moveRight();
};

class L_Shape : public Shape{
    public:
        L_Shape();
        void fall();
        void moveLeft();
        void moveRight();
};

class J_Shape : public Shape{
    public:
        J_Shape();
        void fall();
        void moveLeft();
        void moveRight();
};

class S_Shape : public Shape{
    public:
        S_Shape();
        void fall();
        void moveLeft();
        void moveRight();
};

class Z_Shape : public Shape{
    public:
        Z_Shape();
        void fall();
        void moveLeft();
        void moveRight();
};

#endif