#include "vector2.h"
#include <math.h>

void Vector2::rotateLeft(Vector2 center){
    if(center.x == x && center.y == y)
        return;

    int n_x = center.x + (y - center.y);
    int n_y = center.y - (x - center.x);
    x = n_x;
    y = n_y;
}

void Vector2::rotateRight(Vector2 center){
    if(center.x == x && center.y == y)
        return;

    int n_x = center.x - (y - center.y);
    int n_y = center.y + (x - center.x);
    x = n_x;
    y = n_y;
}