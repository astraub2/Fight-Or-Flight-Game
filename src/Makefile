CC = /usr/bin/g++-4.9 
SFML_LIB = -lsfml-graphics -lsfml-window -lsfml-system
SFML_PATH = ../SFML-2.4.2
CXX = /usr/bin/g++-4.9 -std=c++11

all: test

run: test
	export LD_LIBRARY_PATH=$(SFML_PATH)/lib && ./$<

%.o: %.cpp
	$(CXX) -c $< -I$(SFML_PATH)/include

test: main.o
	$(CXX) $< -o $@ -L$(SFML_PATH)/lib $(SFML_LIB)

clean:
	rm *.o test


