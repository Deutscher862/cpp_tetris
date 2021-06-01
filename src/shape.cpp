#include "shape.h"

void Shape::fall(){
    for(int i = 0; i < 4; i++){
        map[i]->x++;
    }
    center.x++;
}

void Shape::moveLeft(){
    for(int i = 0; i < 4; i++){
        map[i]->y--;
    } 
    center.y--;
}

void Shape::moveRight(){
    for(int i = 0; i < 4; i++){
        map[i]->y++;
    }
    center.y++;
}

void Shape::rotate(){
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

S_Shape::S_Shape(){
    this->color = sf::Color::Green;
    this->center = Vector2(-1, 5);
    this->center.setVal(-1, 5);
    for(int i = 0; i < 4; i++){
        map[i] = new Vector2(-5, -5);
    }
    map[0]->setVal(-1, 4);
    map[1]->setVal(-1, 5);
    map[2]->setVal(-2, 5);
    map[3]->setVal(-2, 6);

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