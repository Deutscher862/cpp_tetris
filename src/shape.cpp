#include "shape.h"

void decreaseVal(Vector2* map[][SHAPE_WIDTH]){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            if(map[i][j]->x != -5){
                map[i][j]->x++;
            }
        }
    }
}

void setLeft(Vector2* map[][SHAPE_WIDTH]){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            if(map[i][j]->x != -5){
                map[i][j]->y--;
            }
        }
    }
}

void setRight(Vector2* map[][SHAPE_WIDTH]){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            if(map[i][j]->x != -5){
                map[i][j]->y++;
            }
        }
    }
}

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
    decreaseVal(map);
}

void O_Shape::moveLeft(){
    setLeft(map);
}

void O_Shape::moveRight(){
    setRight(map);
}

I_Shape::I_Shape(){
    this->color = sf::Color::Blue;
    this->center = Vector2(0, 1);
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            map[i][j] = new Vector2(-5, -5);
        }
    }
    map[0][0]->setVal(-1, 3);
    map[0][1]->setVal(-1, 4);
    map[0][2]->setVal(-1, 5);
    map[0][3]->setVal(-1, 6);

}

void I_Shape::fall(){
    decreaseVal(map);
}

void I_Shape::moveLeft(){
    setLeft(map);
}

void I_Shape::moveRight(){
    setRight(map);
}

T_Shape::T_Shape(){
    this->color = sf::Color::Magenta;
    this->center = Vector2(1, 1);
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            map[i][j] = new Vector2(-5, -5);
        }
    }
    map[0][1]->setVal(-1, 4);
    map[1][0]->setVal(-2, 3);
    map[1][1]->setVal(-2, 4);
    map[1][2]->setVal(-2, 5);

}

void T_Shape::fall(){
    decreaseVal(map);
}

void T_Shape::moveLeft(){
    setLeft(map);
}

void T_Shape::moveRight(){
    setRight(map);
}

L_Shape::L_Shape(){
    this->color = sf::Color::White;
    this->center = Vector2(0, 1);
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            map[i][j] = new Vector2(-5, -5);
        }
    }
    map[0][0]->setVal(-1, 4);
    map[0][1]->setVal(-1, 5);
    map[0][2]->setVal(-1, 6);
    map[1][2]->setVal(-2, 6);

}

void L_Shape::fall(){
    decreaseVal(map);
}

void L_Shape::moveLeft(){
    setLeft(map);
}

void L_Shape::moveRight(){
    setRight(map);
}

J_Shape::J_Shape(){
    this->color = sf::Color::Cyan;
    this->center = Vector2(0, 1);
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            map[i][j] = new Vector2(-5, -5);
        }
    }
    map[0][0]->setVal(-1, 4);
    map[0][1]->setVal(-1, 5);
    map[0][2]->setVal(-1, 6);
    map[1][0]->setVal(-2, 4);

}

void J_Shape::fall(){
    decreaseVal(map);
}

void J_Shape::moveLeft(){
    setLeft(map);
}

void J_Shape::moveRight(){
    setRight(map);
}

S_Shape::S_Shape(){
    this->color = sf::Color::Green;
    this->center = Vector2(1, 1);
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            map[i][j] = new Vector2(-5, -5);
        }
    }
    map[0][0]->setVal(-1, 4);
    map[0][1]->setVal(-1, 5);
    map[1][1]->setVal(-2, 5);
    map[1][2]->setVal(-2, 6);

}

void S_Shape::fall(){
    decreaseVal(map);
}

void S_Shape::moveLeft(){
    setLeft(map);
}

void S_Shape::moveRight(){
    setRight(map);
}

Z_Shape::Z_Shape(){
    this->color = sf::Color::Red;
    this->center = Vector2(1, 1);
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            map[i][j] = new Vector2(-5, -5);
        }
    }
    map[1][0]->setVal(-2, 4);
    map[1][1]->setVal(-2, 5);
    map[0][1]->setVal(-1, 5);
    map[0][2]->setVal(-1, 6);
}

void Z_Shape::fall(){
    decreaseVal(map);
}

void Z_Shape::moveLeft(){
    setLeft(map);
}

void Z_Shape::moveRight(){
    setRight(map);
}