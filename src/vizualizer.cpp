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

bool Vizualizer::canShapeFall(Shape* shape){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            Vector2* v = shape->getVectorAt(i, j);
            int x = v->x;
            if(x != -5 && (x+1 == HEIGHT || (x+1 >= 0 && !grid[x+1][v->y]->isEmpty())))
                return false;
        }
    }
    return true;
}

void Vizualizer::colorTiles(Shape* shape, sf::Color color){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            Vector2* v = shape->getVectorAt(i, j);
            if(v->x >= 0){
                grid[v->x][v->y]->setColor(color);
            }
        }
    }
}

void Vizualizer::blockTiles(Shape* shape){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            Vector2* v = shape->getVectorAt(i, j);
            if(v->x != -5)
                grid[v->x][v->y]->setEmpty(false);
        }
    }
}