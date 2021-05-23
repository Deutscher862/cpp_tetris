#include "vector2.h"
#include <math.h>

void Vector2::rotate(Vector2 center){
    if(center.x == x && center.y == y)
        return;

    int n_x = x - center.x;
    int n_y = y - center.y;
    if(n_x >= 0 && n_y >= 0){
        x = center.x - abs(n_y);
        y = center.y + abs(n_x);
    } else if(n_x <= 0 && n_y >= 0){
        x = center.x - abs(n_y);
        y = center.y - abs(n_x);
    } else if(n_x <= 0 && n_y <= 0){
        x = center.x + abs(n_y);
        y = center.y - abs(n_x);
    } else if(n_x >= 0 && n_y <= 0){
        x = center.x + abs(n_y);
        y = center.y + abs(n_x);
    }
}