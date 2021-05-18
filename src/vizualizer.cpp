#include "vizualizer.h"
#include "config.h"
#include "tile.h"

Vizualizer::Vizualizer(sf::RenderWindow &window) : window(window){
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            grid[i][j] = new Tile();
            grid[i][j]->setPosition(i, j);
        }
    }
}

void Vizualizer::drawGrid(){
    for(auto & i : this->grid){
        for(auto t : i){
            this->window.draw(t->getRect());
        }
    }
}