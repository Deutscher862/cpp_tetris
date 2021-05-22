#include "shape.h"

void decreaseVal(Vector2* map[4]){
    for(int i = 0; i < 4; i++){
        map[i]->x++;
    }
}

void setLeft(Vector2* map[4]){
    for(int i = 0; i < 4; i++){
        map[i]->y--;
    } 
}

void setRight(Vector2* map[4]){
    for(int i = 0; i < 4; i++){
        map[i]->y++;
    }
}

void turnLeft(Vector2* map[4], Vector2 center){
    for(int i = 0; i < 4; i++)
        map[i]->rotate(center);
}


O_Shape::O_Shape(){
    this->color = sf::Color::Yellow;
    this->center = Vector2(-1, 4);
    this->center.setVal(-1, 4);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-1, 4);
    map[1]->setVal(-1, 5);
    map[2]->setVal(-2, 4);
    map[3]->setVal(-2, 5);

}

void O_Shape::fall(){
    decreaseVal(map);
    center.x++;
}

void O_Shape::moveLeft(){
    setLeft(map);
    center.y--;
}

void O_Shape::moveRight(){
    setRight(map);
    center.y++;
}

void O_Shape::rotate(){
    return;
}


I_Shape::I_Shape(){
    this->color = sf::Color::Blue;
    this->center = Vector2(-1, 4);
    this->center.setVal(-1, 4);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-1, 3);
    map[1]->setVal(-1, 4);
    map[2]->setVal(-1, 5);
    map[3]->setVal(-1, 6);

}

void I_Shape::fall(){
    decreaseVal(map);
    center.x++;
}

void I_Shape::moveLeft(){
    setLeft(map);
    center.y--;
}

void I_Shape::moveRight(){
    setRight(map);
    center.y++;
}

void I_Shape::rotate(){
    turnLeft(map, center);
}

T_Shape::T_Shape(){
    this->color = sf::Color::Magenta;
    this->center = Vector2(-2, 4);
    this->center.setVal(-2, 4);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-1, 4);
    map[1]->setVal(-2, 3);
    map[2]->setVal(-2, 4);
    map[3]->setVal(-2, 5);

}

void T_Shape::fall(){
    decreaseVal(map);
    center.x++;
}

void T_Shape::moveLeft(){
    setLeft(map);
    center.y--;
}

void T_Shape::moveRight(){
    setRight(map);
    center.y++;
}

void T_Shape::rotate(){
    turnLeft(map, center);
}

L_Shape::L_Shape(){
    this->color = sf::Color::White;
    this->center = Vector2(-1, 5);
    this->center.setVal(-1, 5);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-1, 4);
    map[1]->setVal(-1, 5);
    map[2]->setVal(-1, 6);
    map[3]->setVal(-2, 6);
}

void L_Shape::fall(){
    decreaseVal(map);
    center.x++;
}

void L_Shape::moveLeft(){
    setLeft(map);
    center.y--;
}

void L_Shape::moveRight(){
    setRight(map);
    center.y++;
}

void L_Shape::rotate(){
    turnLeft(map, center);
}

J_Shape::J_Shape(){
    this->color = sf::Color::Cyan;
    this->center = Vector2(-1, 5);
    this->center.setVal(-1, 5);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-1, 4);
    map[1]->setVal(-1, 5);
    map[2]->setVal(-1, 6);
    map[3]->setVal(-2, 4);

}

void J_Shape::fall(){
    decreaseVal(map);
    center.x++;
}

void J_Shape::moveLeft(){
    setLeft(map);
    center.y--;
}

void J_Shape::moveRight(){
    setRight(map);
    center.y++;
}

void J_Shape::rotate(){
    turnLeft(map, center);
}

S_Shape::S_Shape(){
    this->color = sf::Color::Green;
    this->center = Vector2(-1, 5);
    printf("kurwa XD %d %d\n", center.x, center.y);
    this->center.setVal(-1, 5);
    printf("kurwa XDDDD %d %d\n", center.x, center.y);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-1, 4);
    map[1]->setVal(-1, 5);
    map[2]->setVal(-2, 5);
    map[3]->setVal(-2, 6);

}

void S_Shape::fall(){
    decreaseVal(map);
    center.x++;
}

void S_Shape::moveLeft(){
    setLeft(map);
    center.y--;
}

void S_Shape::moveRight(){
    setRight(map);
    center.y++;
}

void S_Shape::rotate(){
    turnLeft(map, center);
}

Z_Shape::Z_Shape(){
    this->color = sf::Color::Red;
    this->center = Vector2(-1, 5);
    this->center.setVal(-1, 5);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-2, 4);
    map[1]->setVal(-2, 5);
    map[2]->setVal(-1, 5);
    map[3]->setVal(-1, 6);
}

void Z_Shape::fall(){
    decreaseVal(map);
    center.x++;
}

void Z_Shape::moveLeft(){
    setLeft(map);
    center.y--;
}

void Z_Shape::moveRight(){
    setRight(map);
    center.y++;
}

void Z_Shape::rotate(){
    turnLeft(map, center);
}