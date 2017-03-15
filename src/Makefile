CC = /usr/bin/g++-4.9 
SFML_LIB = -lsfml-graphics -lsfml-window -lsfml-system
SFML_PATH = ../SFML-2.4.2
CXX = $(CC) -std=c++11
OBJECTS = PlayerMove.o Point.o Player.o HumanPlayer.o CowboyPlayer.o AlienPlayer.o Game.o main.o

all: main

run: main
	export LD_LIBRARY_PATH=$(SFML_PATH)/lib && ./$<

%.o: %.cpp
	$(CXX) -c $< -I$(SFML_PATH)/include

main: $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ -L$(SFML_PATH)/lib $(SFML_LIB)

clean:
	rm *.o main
