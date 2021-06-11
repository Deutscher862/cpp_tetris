#ifndef SHAPE_H
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
        virtual ~Shape(){};
        virtual void fall();
        virtual void moveLeft();
        virtual void moveRight();
        virtual void rotate();
        Vector2* getVectorAt(int x) const {return map[x];}
        sf::Color getColor() const {return color;}
        Vector2 getCenterVector() const {return center;}
};

class O_Shape : public Shape{
    public:
        O_Shape();
        void rotate() override;
};

class I_Shape : public Shape{
    public:
        I_Shape();
};

class T_Shape : public Shape{
    public:
        T_Shape();
};

class L_Shape : public Shape{
    public:
        L_Shape();
};

class J_Shape : public Shape{
    public:
        J_Shape();
};

class S_Shape : public Shape{
    public:
        S_Shape();
};

class Z_Shape : public Shape{
    public:
        Z_Shape();
};

#endif