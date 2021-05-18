#include "tile.h"

Tile::Tile(int x = 0, int y = 0){
    sf::RectangleShape rec;
    rec.setSize(sf::Vector2f(10, 10));
    rec.setOutlineColor(sf::Color::Red);
    rec.setFillColor(sf::Color::Blue);
    rec.setOutlineThickness(1);
    rec.setPosition(y*10+10, x*10+20);

    this->color = sf::Color::Blue;

    this->rectangle = rec;
}

void Tile::setColor(sf::Color color){
    this->color = color;
    this->rectangle.setFillColor(color);
}

sf::RectangleShape Tile::getRect(){
    return this->rectangle;
}