#include "engine.h"

Engine::Engine(Vizualizer& n_viz): vizualizer(n_viz){

}

void Engine::generateShape(){
    srand (time(NULL));
    int shapeNumber = rand() % 3;
    switch(shapeNumber){
        case 0:
            this->currentShape = new O_Shape();
            break;
        case 1:
            this->currentShape = new I_Shape();
            break;
        case 2:
            this->currentShape = new T_Shape();
            break;
        default:
            //jakiś kod
            break;
        }
}

void Engine::moveObject(){
    if(this->vizualizer.canShapeFall(currentShape)){
        //printf("RUSZAM SIĘ %d %d\n", currentShape->getVectorAt(1, 1)->x, currentShape->getVectorAt(1, 1)->y);
        vizualizer.colorTiles(currentShape, sf::Color::Black);
        this->currentShape->fall();
        vizualizer.colorTiles(currentShape, currentShape->getColor());
    }
    else{
        checkIfEnd();
        vizualizer.blockTiles(currentShape);
        generateShape();
    }

}

void Engine::checkIfEnd(){
    for(int i = 0; i < SHAPE_HEIGHT; i++){
        for(int j = 0; j < SHAPE_WIDTH; j++){
            Vector2* v = currentShape->getVectorAt(i, j);
            if(v->x != -5 && v->x < 0){
                exit(0);
            }
        }
    }
}