#include "tile.h"

Tile::Tile(){
    sf::RectangleShape rec;
    rec.setSize(sf::Vector2f(40, 40));
    rec.setOutlineColor(sf::Color::Red);
    rec.setFillColor(sf::Color::Black);
    rec.setOutlineThickness(1);

    this->color = sf::Color::Black;

    this->rectangle = rec;
    this->empty = true;
}

void Tile::setColor(sf::Color new_color){
    this->color = new_color;
    this->rectangle.setFillColor(color);
}

sf::RectangleShape Tile::getRect(){
    return this->rectangle;
}

void Tile::setPosition(int x, int y) {
    rectangle.setPosition(y*40+300, x*40+50);
    this->v = Vector2(x, y);
}