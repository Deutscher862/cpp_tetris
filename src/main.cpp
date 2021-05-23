#include <iostream>
#include "vizualizer.h"
#include "engine.h"
#include <unistd.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 900), "TETRIS");
    Vizualizer v(window);
    Engine e(v);
    e.generateShape();

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed){
                e.keyHandler(event);
            }
        }
        e.moveObject();
        window.clear();
        v.checkForFullRow();
        v.drawGrid();
        window.display();

        usleep(200000);
    }

    return 0;
}