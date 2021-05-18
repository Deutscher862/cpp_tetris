#include <iostream>
#include "vizualizer.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 900), "TETRIS");
    Vizualizer v(window);

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        v.drawGrid();
        window.display();
    }

    return 0;
}