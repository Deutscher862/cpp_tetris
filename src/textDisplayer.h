#ifndef TEXTDISPLAYER_H
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
        sf::Text controls;

    public:
        TextDisplayer(sf::RenderWindow &window);
        void setPoints(long n_points);
        void setHighestScore(long h_score);
        sf::Text setText(int size, int x, int y, std::string val);
        sf::Text getPointsValue() const {return pointsValue;}
        sf::Text getPointsTitle() const {return pointsTitle;}
        void drawText();
        void drawGameOver();
        void reset();
};

#endif