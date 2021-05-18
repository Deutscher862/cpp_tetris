#include "tile.h"

Tile::Tile() {
    sf::RectangleShape rec;
    rec.setSize(sf::Vector2f(10, 10));
    rec.setOutlineColor(sf::Color::Red);
    rec.setFillColor(sf::Color::Blue);
    rec.setOutlineThickness(1);

    this->color = sf::Color::Blue;

    this->rectangle = rec;
}

void Tile::setColor(sf::Color new_color){
    this->color = new_color;
    this->rectangle.setFillColor(color);
}

sf::RectangleShape Tile::getRect(){
    return this->rectangle;
}

void Tile::setPosition(int x, int y) {
    rectangle.setPosition(y*10+10, x*10+20);
}
