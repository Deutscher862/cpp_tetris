#include "vizualizer.h"
#include "config.h"

Vizualizer::Vizualizer(sf::RenderWindow& window):window(window){ 
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            sf::RectangleShape rec;
            rec.setSize(sf::Vector2f(10, 10));
            rec.setOutlineColor(sf::Color::Red);
            rec.setOutlineThickness(5);
            rec.setPosition(j*10+10, i*10+20);
            this->grid[i][j] = rec;
        }
    }
}

void Vizualizer::drawGrid(){
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            sf::RectangleShape rec = this->grid[i][j];
            this->window.draw(rec);
        }
    }
}