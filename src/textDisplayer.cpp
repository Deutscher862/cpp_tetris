#include "textDisplayer.h"

TextDisplayer::TextDisplayer(sf::RenderWindow &window) : window(window){
    font.loadFromFile("resources/Lemon Friday.ttf");

    points.setFont(font);
    points.setCharacterSize(30);
    points.setPosition(800, 100);
    points.setString("POINTS");

    pointsValue.setFont(font);
    pointsValue.setCharacterSize(30);
    pointsValue.setPosition(840, 150);
}

void TextDisplayer::setPoints(long n_points){
    pointsValue.setString(std::to_string(n_points));
}

void TextDisplayer::draw(){
    window.draw(points);
    window.draw(pointsValue);
}