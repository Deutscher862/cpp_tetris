#include "textDisplayer.h"

TextDisplayer::TextDisplayer(sf::RenderWindow &window) : window(window){
    font.loadFromFile("resources/Lemon Friday.ttf");

    pointsTitle.setFont(font);
    pointsTitle.setCharacterSize(30);
    pointsTitle.setPosition(800, 100);
    pointsTitle.setString("SCORE");

    pointsValue.setFont(font);
    pointsValue.setCharacterSize(30);
    pointsValue.setPosition(840, 150);

    gameOver.setFont(font);
    gameOver.setCharacterSize(60);
    gameOver.setPosition(330, 200);
    gameOver.setString("GAME OVER");
    
    highestScore.setFont(font);
    highestScore.setCharacterSize(30);
    highestScore.setPosition(750, 200);
    highestScore.setString("Highest score:");

    highestScoreValue.setFont(font);
    highestScoreValue.setCharacterSize(30);
    highestScoreValue.setPosition(840, 250);
    highestScoreValue.setString("-");

    nextBrick.setFont(font);
    nextBrick.setCharacterSize(30);
    nextBrick.setPosition(80, 100);
    nextBrick.setString("Next brick:");
}

void TextDisplayer::setPoints(long n_points){
    pointsValue.setString(std::to_string(n_points));
}

void TextDisplayer::setHighestScore(long h_score){
    highestScoreValue.setString(std::to_string(h_score));
}

void TextDisplayer::drawText(){
    window.draw(pointsTitle);
    window.draw(pointsValue);
    window.draw(highestScore);
    window.draw(highestScoreValue);
    window.draw(nextBrick);
}

void TextDisplayer::drawGameOver(){
    pointsTitle.setPosition(430, 300);
    pointsTitle.setString("Your score:");
    pointsValue.setPosition(490, 350);
    highestScore.setPosition(400, 400);
    highestScoreValue.setPosition(490, 450);
    window.draw(gameOver);
    window.draw(pointsTitle);
    window.draw(pointsValue);
    window.draw(highestScoreValue);
    window.draw(highestScore);
}

void TextDisplayer::reset(){
    pointsTitle.setPosition(800, 100);
    pointsTitle.setString("POINTS");
    pointsValue.setPosition(840, 150);
    highestScore.setPosition(750, 200);
    highestScoreValue.setPosition(840, 250);
}