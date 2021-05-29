#include "tetris.h"
#include "map.h"
#include "engine.h"
#include "textDisplayer.h"
#include <unistd.h>
#include <string.h>


void Tetris::run(){
    sf::RenderWindow window(sf::VideoMode(1000, 900), "TETRIS");
    Map map(window);
    NextShapePanel panel(window);
    Engine e(map, panel);
    TextDisplayer displayer(window);

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
        displayer.setPoints(e.getPoints());
        displayer.draw();
        map.drawGrid();
        panel.drawGrid();
        window.display();

        usleep(150000);
    }
}