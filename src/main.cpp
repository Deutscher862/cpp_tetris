#include <iostream>
#include "vizualizer.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "TETRIS");
    Vizualizer v(window);

    v.start();

    return 0;
}