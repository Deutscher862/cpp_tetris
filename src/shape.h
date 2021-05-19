#ifndef SHAPE_H // include guard
#define SHAPE_H

#include <SFML/Graphics.hpp>
#include "config.h"
#include "vector2.h"

class Shape{
    protected:
        sf::Color color;
        Vector2 center;
        Vector2* map [4];

    public:
        virtual void fall() = 0;
        virtual void moveLeft() = 0;
        virtual void moveRight() = 0;
        virtual void rotateLeft() = 0;
        virtual void rotateRight() = 0;
        Vector2* getVectorAt(int x) {return map[x];}
        sf::Color getColor() {return color;}
        Vector2 getCenterVector(){return center;}
};

class O_Shape : public Shape{
    public:
        O_Shape();
        void fall();
        void moveLeft();
        void moveRight();
        void rotateLeft();
        void rotateRight();
};

class I_Shape : public Shape{
    public:
        I_Shape();
        void fall();
        void moveLeft();
        void moveRight();
        void rotateLeft();
        void rotateRight();
};

class T_Shape : public Shape{
    public:
        T_Shape();
        void fall();
        void moveLeft();
        void moveRight();
        void rotateLeft();
        void rotateRight();
};

class L_Shape : public Shape{
    public:
        L_Shape();
        void fall();
        void moveLeft();
        void moveRight();
        void rotateLeft();
        void rotateRight();
};

class J_Shape : public Shape{
    public:
        J_Shape();
        void fall();
        void moveLeft();
        void moveRight();
        void rotateLeft();
        void rotateRight();
};

class S_Shape : public Shape{
    public:
        S_Shape();
        void fall();
        void moveLeft();
        void moveRight();
        void rotateLeft();
        void rotateRight();
};

class Z_Shape : public Shape{
    public:
        Z_Shape();
        void fall();
        void moveLeft();
        void moveRight();
        void rotateLeft();
        void rotateRight();
};

#endif