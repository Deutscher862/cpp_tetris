#include "vizualizer.h"

Vizualizer::Vizualizer(sf::RenderWindow& window):window(window){ 
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            sf::RectangleShape rec;
            rec.setSize(sf::Vector2f(10, 10));
            rec.setOutlineColor(sf::Color::Red);
            rec.setOutlineThickness(5);
            rec.setPosition(i*10+10, j*10+20);
            this->grid[i][j] = rec;
        }
    }
}

void Vizualizer::start(){

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //rzeczy pozawątkowe

        window.clear();
        window.display();
        //window.draw(rectangle);
    }
}