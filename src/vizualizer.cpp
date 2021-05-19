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
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        int x = v->x;
        if(x+1 == HEIGHT || (x+1 >= 0 && !grid[x+1][v->y]->isEmpty()))
            return false;
    }
    return true;
}

void Vizualizer::colorTiles(Shape* shape, sf::Color color){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        if(v->x >= 0)
            grid[v->x][v->y]->setColor(color);
    }
}

void Vizualizer::blockTiles(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        grid[v->x][v->y]->setEmpty(false);
    }
}

bool Vizualizer::canShapeMoveLeft(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        int x = v->x;
        int y = v->y;
        if(y-1 < 0 || (x >= 0 && !grid[x][y-1]->isEmpty()))
            return false;
    }
    return true;
}

bool Vizualizer::canShapeMoveRight(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        int x = v->x;
        int y = v->y;
        if(y+1 == WIDTH || (x >= 0 && !grid[x][y-1]->isEmpty()))
            return false;
    }
    return true;
}

bool Vizualizer::canShapeRotateLeft(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        Vector2 v_test(v->x, v->y);
        v_test.y = v->y;
        //printf("ORG: %d %d   n: %d %d\n", v->x, v->y, v_test.x, v_test.y);
        v_test.rotateLeft(shape->getCenterVector());
        int x = v_test.x;
        int y = v_test.y;
        if(y < 0 || y == WIDTH || x >= HEIGHT || (x >= 0 && x < HEIGHT && !grid[x][y]->isEmpty()))
            return false;
    }
    return true;
}

bool Vizualizer::canShapeRotateRight(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        Vector2 v_test(v->x, v->y);
        v_test.rotateRight(shape->getCenterVector());
        int x = v_test.x;
        int y = v_test.y;
        if(y < 0 || y >= WIDTH || x >= HEIGHT || (x >= 0 && x < HEIGHT && !grid[x][y]->isEmpty()))
            return false;
    }
    return true;
}