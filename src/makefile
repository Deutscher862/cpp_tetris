LIBS=-lsfml-graphics -lsfml-window -lsfml-system
CXX := g++

all: tetris

%.o: %.cpp
		$(CXX) -c $< -o $@

%.o: %.h
		$(CXX) -c $< -o $@

tetris: main.o map.o tile.o engine.o shape.o vector2.o textDisplayer.o
		$(CXX) -o tetris main.o map.o tile.o engine.o shape.o vector2.o textDisplayer.o $(LIBS)

run:
	./tetris

clean:
	rm -f thegame *.o