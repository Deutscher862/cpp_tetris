#ifndef TEXTDISPLAYER_H // include guard
#define TEXTDISPLAYER_H

#include <SFML/Graphics.hpp>
#include <string.h>

class TextDisplayer{
    private:
        sf::RenderWindow& window;
        sf::Font font;
        sf::Text pointsTitle;
        sf::Text pointsValue;
        sf::Text highestScore;
        sf::Text highestScoreValue;
        sf::Text gameOver;
        sf::Text nextBrick;

    public:
        TextDisplayer(sf::RenderWindow &window);
        void setPoints(long n_points);
        void setHighestScore(long h_score);
        sf::Text getPointsValue(){return pointsValue;}
        sf::Text getPointsTitle(){return pointsTitle;}
        void drawText();
        void drawGameOver();
        void reset();
};

#endif