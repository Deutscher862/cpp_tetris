#include "textDisplayer.h"

sf::Text TextDisplayer::setText(int size, int x, int y, std::string val){
    sf::Text text;
    text.setFont(font);
    if(size > 0)
        text.setCharacterSize(size);
    text.setPosition(x, y);
    text.setString(val);
    return text;
}

TextDisplayer::TextDisplayer(sf::RenderWindow &window) : window(window){
    font.loadFromFile("resources/Lemon Friday.ttf");

    pointsTitle = setText(30, 800, 100, "SCORE");
    pointsValue = setText(30, 840, 150, "");
    gameOver = setText(60, 330, 200, "GAME OVER");
    highestScore = setText(30, 750, 200, "Highest score:");
    highestScoreValue = setText(30, 840, 250, "-");
    nextBrick = setText(30, 80, 100, "Next brick:");
    controls = setText(20, 40, 650, "A, left   - move left\nD, right - move right\nW, up     - rotate brick\nS, down - throw down\nR           - restart game\nescape   - exit");
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
    window.draw(controls);
}

void TextDisplayer::drawGameOver(){
    pointsTitle = setText(-1, 430, 300, "Your score:");
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
    pointsTitle = setText(-1, 800, 100, "SCORE");
    pointsValue.setPosition(840, 150);
    highestScore.setPosition(750, 200);
    highestScoreValue.setPosition(840, 250);
}