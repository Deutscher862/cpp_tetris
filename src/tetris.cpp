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
    TextDisplayer displayer(window);
    Engine engine(map, panel, displayer);

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed){
                engine.keyHandler(event);
            }
        }
        if(!engine.isGameOver()){       
            engine.moveObject();
            window.clear();
            engine.addPoints();
            displayer.setPoints(engine.getPoints());
            displayer.drawText();
            map.drawGrid();
            panel.drawGrid();
            window.display();
            usleep(150000);
        }
        else{
            window.clear();
            displayer.drawGameOver();
            window.display();
            //usleep(5000000);
        }

    }
}