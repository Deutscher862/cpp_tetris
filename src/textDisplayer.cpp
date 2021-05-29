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

    gameOver.setFont(font);
    gameOver.setCharacterSize(60);
    gameOver.setPosition(330, 200);
    gameOver.setString("GAME OVER");
}

void TextDisplayer::setPoints(long n_points){
    pointsValue.setString(std::to_string(n_points));
}

void TextDisplayer::drawText(){
    window.draw(points);
    window.draw(pointsValue);
}

void TextDisplayer::drawGameOver(){

    points.setPosition(340, 300);
    points.setString("YOUR SCORE:");
    pointsValue.setPosition(340, 350);
    window.draw(gameOver);
    window.draw(points);
    window.draw(pointsValue);
}

void TextDisplayer::reset(){
    points.setPosition(800, 100);
    points.setString("POINTS");
    pointsValue.setPosition(840, 150);
}