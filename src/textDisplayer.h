#ifndef TEXTDISPLAYER_H // include guard
#define TEXTDISPLAYER_H

#include <SFML/Graphics.hpp>
#include <string.h>

class TextDisplayer{
    private:
        sf::RenderWindow& window;
        sf::Font font;
        sf::Text points;
        sf::Text pointsValue;

    public:
        TextDisplayer(sf::RenderWindow &window);
        void setPoints(long n_points);
        sf::Text getPointsValue(){return pointsValue;}
        sf::Text getPoints(){return points;}
        void draw();
};

#endif