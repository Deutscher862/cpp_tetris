#include <iostream>
#include "map.h"
#include "engine.h"
#include <unistd.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 900), "TETRIS");
    Map map(window);
    NextShapePanel panel(window);
    Engine e(map, panel);

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
        e.addPoints();
        map.drawGrid();
        panel.drawGrid();
        window.display();

        usleep(200000);
    }

    return 0;
}