#include "engine.h"

Engine::Engine(Vizualizer& n_viz): vizualizer(n_viz){}

void Engine::generateShape(){
    srand (time(NULL));
    int shapeNumber = rand() % 7;
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
        case 3:
            this->currentShape = new L_Shape();
            break;
        case 4:
            this->currentShape = new J_Shape();
            break;
        case 5:
            this->currentShape = new S_Shape();
            break;
        case 6:
            this->currentShape = new Z_Shape();
            break;
        default:
            break;
        }
}

void Engine::moveObject(){
    if(this->vizualizer.canShapeFall(currentShape)){
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
    for(int i = 0; i < 4; i++){
        Vector2* v = currentShape->getVectorAt(i);
        if(v->x < 0) exit(0);
    }
}

void Engine::keyHandler(sf::Event event){
    if (event.type == sf::Event::KeyPressed){
        switch(event.key.code){
            case sf::Keyboard::Escape:
                exit(0);
                break;

            case sf::Keyboard::A:
                if(vizualizer.canShapeMoveLeft(currentShape)){
                    vizualizer.colorTiles(currentShape, sf::Color::Black);
                    currentShape->moveLeft();
                    vizualizer.colorTiles(currentShape, currentShape->getColor());
                }
                break;

            case sf::Keyboard::D:
                if(vizualizer.canShapeMoveRight(currentShape)){
                    vizualizer.colorTiles(currentShape, sf::Color::Black);
                    currentShape->moveRight();
                    vizualizer.colorTiles(currentShape, currentShape->getColor());
                }
                break;

            case sf::Keyboard::W:
                if(vizualizer.canShapeRotate(currentShape)){
                    vizualizer.colorTiles(currentShape, sf::Color::Black);
                    currentShape->rotate();
                    vizualizer.colorTiles(currentShape, currentShape->getColor());
                }
                break;

            default:
                break;
            
        }           
    }
}