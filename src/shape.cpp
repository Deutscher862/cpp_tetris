#include "shape.h"

O_Shape::O_Shape(){
    this->color = sf::Color::Yellow;
    this->center = Vector2(1, 1);
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            map[i][j] = new Vector2(-5, -5);
        }
    }
    map[1][1]->setVal(-1, 4);
    map[1][2]->setVal(-1, 5);
    map[2][1]->setVal(-2, 4);
    map[2][2]->setVal(-2, 5);

}

void O_Shape::fall(){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            if(map[i][j]->x != -5){
                map[i][j]->x++;
            }
        }
    }
}