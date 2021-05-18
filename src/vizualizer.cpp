#include "vizualizer.h"
#include "config.h"
#include "tile.h"

Vizualizer::Vizualizer(sf::RenderWindow& window):window(window){
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            Tile t(i, j);
            this->grid[i][j] = t;
        }
    }
}

void Vizualizer::drawGrid(){
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            Tile t = this->grid[i][j];
            this->window.draw(t.getRect());
        }
    }
}