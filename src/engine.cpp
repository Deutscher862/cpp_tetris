#include "engine.h"

Engine::Engine(Map& n_map, NextShapePanel& n_panel): map(n_map), panel(n_panel){
    generateShape();
    this->currentShape = nextShape;
    generateShape();
}

void Engine::generateShape(){
    srand (time(NULL));
    int shapeNumber = rand() % 7;
    switch(shapeNumber){
        case 0:
            this->nextShape = new O_Shape();
            break;
        case 1:
            this->nextShape = new I_Shape();
            break;
        case 2:
            this->nextShape = new T_Shape();
            break;
        case 3:
            this->nextShape = new L_Shape();
            break;
        case 4:
            this->nextShape = new J_Shape();
            break;
        case 5:
            this->nextShape = new S_Shape();
            break;
        case 6:
            this->nextShape = new Z_Shape();
            break;
        default:
            break;
    }
    panel.colorTiles(nextShape, nextShape->getColor());
}

void Engine::moveObject(){
    if(this->map.canShapeFall(currentShape)){
        map.colorTiles(currentShape, sf::Color::Black);
        this->currentShape->fall(); 
        map.colorTiles(currentShape, currentShape->getColor());
    }
    else{
        checkIfEnd();
        map.blockTiles(currentShape);
        currentShape = nextShape;
        panel.colorTiles(nextShape, sf::Color::Black);
        generateShape();
    }
}

void Engine::checkIfEnd(){
    for(int i = 0; i < 4; i++){
        Vector2* v = currentShape->getVectorAt(i);
        if(v->x < 0) exit(0);
    }
}

void Engine::moveLeft(){
    if(map.canShapeMoveLeft(currentShape)){
        map.colorTiles(currentShape, sf::Color::Black);
        currentShape->moveLeft();
        map.colorTiles(currentShape, currentShape->getColor());
    }
}

void Engine::moveRight(){
    if(map.canShapeMoveRight(currentShape)){
        map.colorTiles(currentShape, sf::Color::Black);
        currentShape->moveRight();
        map.colorTiles(currentShape, currentShape->getColor());
    }
}

void Engine::rotate(){
    if(map.canShapeRotate(currentShape)){
        map.colorTiles(currentShape, sf::Color::Black);
        currentShape->rotate();
        map.colorTiles(currentShape, currentShape->getColor());
    }
}

void Engine::fallFast(){
    while(this->map.canShapeFall(currentShape)){
        moveObject();
    }
}

void Engine::keyHandler(sf::Event event){
    if (event.type == sf::Event::KeyPressed){
        switch(event.key.code){
            case sf::Keyboard::Escape:
                exit(0);
                break;

            case sf::Keyboard::A:
                moveLeft();
                break;

            case sf::Keyboard::D:
                moveRight();
                break;

            case sf::Keyboard::W:
                rotate();
                break;
            
            case sf::Keyboard::S:
                fallFast();
                break;

            case sf::Keyboard::Left:
                moveLeft();
                break;

            case sf::Keyboard::Right:
                moveRight();
                break;

            case sf::Keyboard::Up:
                rotate();
                break;
            
            case sf::Keyboard::Down:
                fallFast();
                break;

            default:
                break;
        }           
    }
}