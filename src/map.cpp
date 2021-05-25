#include "map.h"
#include "config.h"
#include "tile.h"

Map::Map(sf::RenderWindow &window) : window(window){
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            grid[i][j] = new Tile();
            grid[i][j]->setPosition(i*TILE_SIZE+50, j*TILE_SIZE+300);
        }
    }
}

void Map::drawGrid(){
    for(auto & i : this->grid){
        for(auto t : i){
            this->window.draw(t->getRect());
        }
    }
}

bool Map::canShapeFall(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        int x = v->x;
        if(x+1 == HEIGHT || (x+1 >= 0 && !grid[x+1][v->y]->isEmpty()))
            return false;
    }
    return true;
}

void Map::colorTiles(Shape* shape, sf::Color color){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        if(v->x >= 0)
            grid[v->x][v->y]->setColor(color);
    }
}

void Map::blockTiles(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        grid[v->x][v->y]->setEmpty(false);
    }
}

bool Map::canShapeMoveLeft(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        int x = v->x;
        int y = v->y;
        if(y-1 < 0 || (x >= 0 && !grid[x][y-1]->isEmpty()))
            return false;
    }
    return true;
}

bool Map::canShapeMoveRight(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        int x = v->x;
        int y = v->y;
        if(y+1 == WIDTH || (x >= 0 && !grid[x][y+1]->isEmpty()))
            return false;
    }
    return true;
}

bool Map::canShapeRotate(Shape* shape){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        Vector2 v_test(v->x, v->y);
        v_test.y = v->y;
        v_test.rotate(shape->getCenterVector());
        int x = v_test.x;
        int y = v_test.y;
        if(y < 0 || y == WIDTH || x >= HEIGHT || (x >= 0 && x < HEIGHT && !grid[x][y]->isEmpty()))
            return false;
    }
    return true;
}

int Map::checkForFullRow(int count){
    for(int i = HEIGHT -1; i >= 0; i--){
        int j = 0;
        bool isFull = true;
        while(j < WIDTH){
            if(grid[i][j]->isEmpty()){
                isFull = false;
                break;
            }
            j++;
        }
        if(isFull){
            return removeRow(i, count);
        }
        else{
            return count;
        }
    }
    return 0;
}

int Map::removeRow(int row, int count){
    for(int i = row-1; i >= 0; i--){
        for(int j = 0; j < WIDTH; j++){
            grid[i+1][j]->setEmpty(grid[i][j]->isEmpty());
            grid[i+1][j]->setColor(grid[i][j]->getColor());
        }
    }
    return checkForFullRow(count+1);
}

NextShapePanel::NextShapePanel(sf::RenderWindow &window) : window(window){
    for(int i = 0; i < 2; i++){    
        for(int j = 0; j < 4; j++){
            grid[i][j] = new Tile();
            grid[i][j]->setPosition(i*TILE_SIZE+50, j*TILE_SIZE+30);
        }
    }
}

void NextShapePanel::colorTiles(Shape* shape, sf::Color color){
    for(int i = 0; i < 4; i++){
        Vector2* v = shape->getVectorAt(i);
        grid[v->x+2][v->y-3]->setColor(color);
    }
}

void NextShapePanel::drawGrid(){
    for(auto & i : this->grid){
        for(auto t : i){
            this->window.draw(t->getRect());
        }
    }
}