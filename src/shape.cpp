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
        map[i]->rotateLeft(center);
}

void turnRight(Vector2* map[4], Vector2 center){
    for(int i = 0; i < 4; i++)
        map[i]->rotateRight(center);
}

O_Shape::O_Shape(){
    this->color = sf::Color::Yellow;
    this->center = Vector2(1, 1);
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
}

void O_Shape::moveLeft(){
    setLeft(map);
}

void O_Shape::moveRight(){
    setRight(map);
}

void O_Shape::rotateLeft(){
    return;
}

void O_Shape::rotateRight(){
    return;
}

I_Shape::I_Shape(){
    this->color = sf::Color::Blue;
    this->center = Vector2(0, 1);
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
}

void I_Shape::moveLeft(){
    setLeft(map);
}

void I_Shape::moveRight(){
    setRight(map);
}

void I_Shape::rotateLeft(){
    turnLeft(map, center);
}

void I_Shape::rotateRight(){
    turnRight(map, center);
}

T_Shape::T_Shape(){
    this->color = sf::Color::Magenta;
    this->center = Vector2(1, 1);
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
}

void T_Shape::moveLeft(){
    setLeft(map);
}

void T_Shape::moveRight(){
    setRight(map);
}

void T_Shape::rotateLeft(){
    turnLeft(map, center);
}

void T_Shape::rotateRight(){
    turnRight(map, center);
}

L_Shape::L_Shape(){
    this->color = sf::Color::White;
    this->center = Vector2(0, 1);
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
}

void L_Shape::moveLeft(){
    setLeft(map);
}

void L_Shape::moveRight(){
    setRight(map);
}

void L_Shape::rotateLeft(){
    turnLeft(map, center);
}

void L_Shape::rotateRight(){
    turnRight(map, center);
}

J_Shape::J_Shape(){
    this->color = sf::Color::Cyan;
    this->center = Vector2(0, 1);
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
}

void J_Shape::moveLeft(){
    setLeft(map);
}

void J_Shape::moveRight(){
    setRight(map);
}

void J_Shape::rotateLeft(){
    turnLeft(map, center);
}

void J_Shape::rotateRight(){
    turnRight(map, center);
}

S_Shape::S_Shape(){
    this->color = sf::Color::Green;
    this->center = Vector2(1, 1);
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
}

void S_Shape::moveLeft(){
    setLeft(map);
}

void S_Shape::moveRight(){
    setRight(map);
}

void S_Shape::rotateLeft(){
    turnLeft(map, center);
}

void S_Shape::rotateRight(){
    turnRight(map, center);
}

Z_Shape::Z_Shape(){
    this->color = sf::Color::Red;
    this->center = Vector2(1, 1);
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
}

void Z_Shape::moveLeft(){
    setLeft(map);
}

void Z_Shape::moveRight(){
    setRight(map);
}

void Z_Shape::rotateLeft(){
    turnLeft(map, center);
}

void Z_Shape::rotateRight(){
    turnRight(map, center);
}