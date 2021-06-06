LIBS=-lsfml-graphics -lsfml-window -lsfml-system
FLAGS := -Wall -pedantic -Wextra -Werror

all: tetris

%.o: %.cpp
		g++ $(FLAGS) -c $< -o $@

%.o: %.h
		g++ $(FLAGS) -c $< -o $@

tetris: main.o tetris.o map.o tile.o engine.o shape.o vector2.o textDisplayer.o
		g++ $(FLAGS) -o tetris main.o tetris.o map.o tile.o engine.o shape.o vector2.o textDisplayer.o $(LIBS)

run:
	./tetris

clean:
	rm -f thegame *.o