#include "vector2.h"
#include <math.h>

void Vector2::rotateLeft(Vector2 center){
    printf("mam %d %d center %d %d \n", x, y, center.x, center.y);
    if(center.x == x && center.y == y)
        return;

    int n_x = center.x - (y - center.y);
    int n_y = center.y + (x - center.x);
    x = n_x;
    y = n_y;
    printf("wychodzę %d %d\n\n", x, y);
}

void Vector2::rotateRight(Vector2 center){
    if(center.x == x && center.y == y)
        return;

    int n_x = center.x - (y - center.y);
    int n_y = center.y + (x - center.x);
    x = n_x;
    y = n_y;
}