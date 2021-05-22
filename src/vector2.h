#ifndef VECTOR2_H // include guard
#define VECTOR2_H

#include <SFML/Graphics.hpp>
#include "config.h"

class Vector2{
    public:
        int x;
        int y;

        Vector2(int x = -1, int y = -1): x(x), y(y){};

        void setVal(int nx, int ny){x=nx; y=ny;}

        void rotate(Vector2 center);
};

#endif