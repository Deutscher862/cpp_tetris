LIBS=-lsfml-graphics -lsfml-window -lsfml-system
CXX := g++

all: tetris

%.o: %.cpp
		$(CXX) -c $< -o $@

%.o: %.h
		$(CXX) -c $< -o $@

tetris: main.o vizualizer.o
		$(CXX) -o tetris main.o vizualizer.o $(LIBS)

run:
	./tetris

clean:
	rm -f thegame *.o